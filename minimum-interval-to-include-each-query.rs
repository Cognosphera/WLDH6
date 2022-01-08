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
            while i < intervals.len() && intervals[i][0] <= q {
                h.push(Reverse((intervals[i][1]-intervals[i][0]+1, intervals[i][1])));
                i += 1;
            }
            while let Some(Reverse(top)) = h.peek() {
                if top.1 >= q { break; }
                h.pop();
            }
            if let Some(Reverse(top)) = h.peek() {
                ans[qi] = top.0;
            }
        }
        ans
    }
}

/// segment tree with range modification but no query
impl Solution {
    pub fn min_interval(intervals: Vec<Vec<i32>>, queries: Vec<i32>) -> Vec<i32> {
        use std::{i32,usize};
        let mut sorted = vec![];
        for itv in intervals.iter() {
            sorted.push(itv[0]);
            sorted.push(itv[1]+1);
        }
        sorted.sort_unstable();
        sorted.dedup();
        let n = sorted.len();
        // partition_point is stable since 1.52.0
        let deflate = |key| -> usize { sorted.binary_search(&key).unwrap_or_else(|i| i) };

        let mut seg = vec![i32::MAX; 2*n];
        for itv in intervals.iter() {
            let mut l = deflate(it