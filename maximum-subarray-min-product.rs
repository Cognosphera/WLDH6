impl Solution {
    pub fn max_sum_min_product(a: Vec<i32>) -> i32 {
        let mut st = vec![];
        let mut l: Vec<usize> = vec![0; a.len()];
        let mut r: Vec<usize> = vec![a.len(); a.len()];
        for (i, &x) in a.iter().enumerate() {
            while let Some(&j) = st.last() {
                if a[j] < x { break; }
                r[j] = i;
                st.pop();
            }
            if let Some(&j) = st.last() { l[i] = j+1; }
            st.push(i);
        }
        let sum: Box<[i64]> = std::iter::once(0).chain(a.iter().scan(0, |s,&y| { *s += y as i64; Some(*s) })).collect();
        let mut ans = 0;
        for i in 0..a.len() {
            ans = ans.max((sum[r[i]]-sum[l[i]]) * a[i] as i64);
        }
        (ans % 1000000007) as i32
    }
}

///

impl Solution {
    pub fn max_sum_min_product(a: Vec<i32>) -> i32 {
        use std::{iter,usize::MAX};
        let sum: Box<[i64]> = iter::once(0).chain(a.iter().scan(0, |s,&y| { *s += y as i64; Some(*s) })).collect();
        