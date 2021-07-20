// IPO
impl Solution {
    pub fn find_maximized_capital(k: i32, mut w: i32, profits: Vec<i32>, capital: Vec<i32>) -> i32 {
        use std::collections::BinaryHeap;
        let mut h = BinaryHeap::new();
        let mut a: Vec<(i32,i32)> = (0..profits.len()).map(|i| (capital[i], profits[i])).collect();
        a.sort_unstable();
        let mut i = 0;
     