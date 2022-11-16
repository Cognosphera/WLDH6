impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
        use std::collections::HashMap;
        let mut freq: HashMap<i32, i32> = HashMap::new();
        for &x in nums.iter() { *freq.entry(x).or_insert(0) += 1; }
        let mut a = freq.into_iter().collect::<Vec<(i32, i32)>>();
        fn nth(a: &mut [(i32,i32)], lo: usize, hi: usize, k: usize) {
            if hi-lo < 2 { return; }
            let t = a[hi+lo>>1]; a[hi+lo>>1] = a[hi-1]; a[hi-1] = t;
            let pivot = a[hi-1].1;
            let mut p = lo;
            for i in lo..hi {
     