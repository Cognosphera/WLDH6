// Process Tasks Using Servers
impl Solution {
    pub fn assign_tasks(servers: Vec<i32>, tasks: Vec<i32>) -> Vec<i32> {
        use std::cmp::Reverse;
        use std::collections::BinaryHeap;
        let n = servers.len();
        let mut ans = vec![0; tasks.len()];
        let mut free: BinaryHeap<Reverse<(i32, i32)>> = BinaryHeap::new();
        let mut busy: BinaryHeap<Reverse<(i32, i32)>> = BinaryHeap::new();
        let mut tick = 0;
        for i in 0..n {
            free.push(Reverse((servers[i], i as i32)));
        }
        for i in 0..tasks.len() {
            if free.is_empty() { tick = (