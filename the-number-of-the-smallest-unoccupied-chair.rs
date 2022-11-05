// The Number of the Smallest Unoccupied Chair
impl Solution {
    pub fn smallest_chair(mut times: Vec<Vec<i32>>, target_friend: i32) -> i32 {
        use std::cmp::Reverse;
        use std::collections::{BinaryHeap,BTreeSet};
        let start = times[target_friend as usize][0];
        times.sort_unstable_by_key(|t| t[0]);
        let mut used: BinaryHeap<Reverse<(i32, i32)>> = BinaryHeap::new();
        let mut free: BinaryHeap<Reverse<i32>> = BinaryHeap::new();
        l