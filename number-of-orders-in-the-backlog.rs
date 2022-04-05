// Number of Orders in the Backlog
impl Solution {
    pub fn get_number_of_backlog_orders(orders: Vec<Vec<i32>>) -> i32 {
        use std::cmp::Reverse;
        use std::collections::BinaryHeap;
        let mut buy = BinaryHeap::new();
        let mut sell = BinaryHeap::new();
        for order in orders.into_iter() {
            if order[2] == 0 { buy.push((order[0], order[1])); }
            else { sell.push(Reverse((order[0], order[1]))); }
            while let (Some(tb), Some(ts)) = (buy.peek(), sell.peek()) {
                if (ts.