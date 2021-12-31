// Minimum Cost to Reach Destination in Time
impl Solution {
    pub fn min_cost(max_time: i32, edges: Vec<Vec<i32>>, passing_fees: Vec<i32>) -> i32 {
        use std::cmp::Reverse;
        use std::collections::BinaryHeap;
        let n = passing_fees.len();
        let mut g = vec![vec![]; n];
        for e in edges.into_iter() {
            g[e[0] as usize]