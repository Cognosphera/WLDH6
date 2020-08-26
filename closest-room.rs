// Closest Room
impl Solution {
    pub fn closest_room(mut rooms: Vec<Vec<i32>>, queries: Vec<Vec<i32>>) -> Vec<i32> {
        use std::collections::BTreeSet;
        rooms.sort_unstable_by_key(|r| -r[1]);
        let mut queries: Vec<_> = queries.into_iter().enumerat