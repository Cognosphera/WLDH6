// Sum of Floored Pairs
impl Solution {
    pub fn sum_of_floored_pairs(nums: Vec<i32>) -> i32 {
        use std::collections::HashMap;
        let mut a = vec![0; 100001];
        let mut freq: HashMap<i32, i32> = HashMap::with_capacity(nums.len());
        for &x in nums.iter() { *freq.entry(x).or_insert(0) += 1; }
        for (&x, &f) in freq.iter() {
            for 