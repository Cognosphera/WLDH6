// The Earliest and Latest Rounds Where Players Compete
impl Solution {
    pub fn earliest_and_latest(n: i32, first: i32, second: i32) -> Vec<i32> {
        if first+second == n + 1 { return vec![1, 1]; }
        let (first, second) = if first+second <= n+1 {(first, second)} else {(n+1-second, n+1-first)};
        l