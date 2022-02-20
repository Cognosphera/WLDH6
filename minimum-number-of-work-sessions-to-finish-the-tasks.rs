// Minimum Number of Work Sessions to Finish the Tasks
impl Solution {
    pub fn min_sessions(tasks: Vec<i32>, session_time: i32) -> i32 {
        let n = tasks.len();
        let m = 1 << n;
        let mut dp =