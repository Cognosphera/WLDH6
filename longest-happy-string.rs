// Longest Happy String
impl Solution {
    pub fn longest_diverse_string(a: i32, b: i32, c: i32) -> String {
        use std::mem::swap;
        let mut ans = vec![];
        let mut s = vec![a, b, c];
        let mut l