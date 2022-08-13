impl Solution {
    pub fn get_order(tasks: Vec<Vec<i32>>) -> Vec<i32> {
        use std::collections::BinaryHeap;
        use std::cmp::Reverse;
        let n = tasks.len();
        let mut tasks: Vec<(i32, i32, usize)> = tasks
            .into_iter().enumerate().map(|(i,a)| (a[0], a[1], i)).collect();
        tasks.sort_by_key(|v| v.0);

        let mut q: BinaryHeap<Reverse<(i32, usize)>> = BinaryHeap::new();
  