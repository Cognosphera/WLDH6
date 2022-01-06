// Minimum Interval to Include Each Query
/// scan line algorithm + heap
impl Solution {
    pub fn min_interval(mut intervals: Vec<Vec<i32>>, queries: Vec<i32>) -> Vec<i32> {
        use std::cmp::Reverse;
        use std::collections::BinaryHeap;
        intervals.sort_unstable_by_key(|itv| itv[0]);
        let mut i = 0;
        let mut h: BinaryHeap<Reverse<(i32, i32)>> = BinaryHeap::new();
        let mut queries: Vec<(usize, i32)> = queries.into_iter().enumerate().collect();
        queries.sort_unstable_by_key(|x| x.1);
        let mut ans = vec![-1; queries.len()];
        for (qi, q) in queries {
      