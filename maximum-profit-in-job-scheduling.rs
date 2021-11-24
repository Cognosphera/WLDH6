// Maximum Profit in Job Scheduling
impl Solution {
    pub fn job_scheduling(start_time: Vec<i32>, end_time: Vec<i32>, profit: Vec<i32>) -> i32 {
        let n = start_time.len();
        let mut a = vec![(0,0,0); n];
        for i in 0..n { a[i] = (start_time[i], end_time[i], pr