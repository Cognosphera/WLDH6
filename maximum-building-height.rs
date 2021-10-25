impl Solution {
    pub fn max_building(n: i32, restrictions: Vec<Vec<i32>>) -> i32 {
        use std::cmp;
        let mut a: Vec<(i32, i32)> = restrictions.into