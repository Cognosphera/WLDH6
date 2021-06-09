// GCD Sort of an Array
impl Solution {
    pub fn gcd_sort(nums: Vec<i32>) -> bool {
        fn find(uf: &mut Vec<i32>