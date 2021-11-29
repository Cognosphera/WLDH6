impl Solution {
    pub fn find_maximum_xor(nums: Vec<i32>) -> i32 {
        use std::collections::HashSet;
        use std::iter::FromIterator;
        (0..32).rev().fold(0, |acc,i| {
            