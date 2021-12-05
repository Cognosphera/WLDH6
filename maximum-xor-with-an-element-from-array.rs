// Maximum XOR With an Element From Array
impl Solution {
    pub fn maximize_xor(mut nums: Vec<i32>, mut queries: Vec<Vec<i32>>) -> Vec<i32> {
        use std::usize::MAX;
        let n = nums.len();
        nums.sort_unstable();
        for (i, q) in queries.iter_mut().enumerate() { q.push(i as i32); }
        queries.sort_unstable_by_key(|q| q[1])