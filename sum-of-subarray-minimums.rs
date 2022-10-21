// Sum of Subarray Minimums
impl Solution {
    pub fn sum_subarray_mins(a: Vec<i32>) -> i32 {
        let mut st: Vec<(i32, i32)> = vec![];
        let mut sum: i6