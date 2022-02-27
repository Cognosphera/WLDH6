// Minimum Skips to Arrive at Meeting On Time
impl Solution {
    pub fn min_skips(dist: Vec<i32>, speed: i32, hours_before: i32) -> i32 {
        let n = dist.len();
        let speed = speed as i64;
        let mx = hours_before as i64 * speed + 1;
        let mut dp = vec![vec![mx; n+1]; 2];
        dp[0][0] = 