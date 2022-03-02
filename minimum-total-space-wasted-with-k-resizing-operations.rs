// Minimum Total Space Wasted With K Resizing Operations
impl Solution {
    pub fn min_space_wasted_k_resizing(nums: Vec<i32>, k: i32) -> i32 {
        let n = nums.len();
        let mut dp = vec![vec![0; n+1]; 2];
        let mut mx = 0;
        let mut sum = 0;
        for i in 0..n {
            mx = mx.max(nums[i]);
            sum += nums[i];
            dp[0][i] = mx*(i as i32+