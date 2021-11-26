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
     