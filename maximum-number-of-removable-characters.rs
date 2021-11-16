// Maximum Number of Removable Characters
impl Solution {
    pub fn maximum_removals(s: String, p: String, removable: Vec<i32>) -> i32 {
        let s = s.as_bytes();
        let p = p.as_bytes();
        let mut l = 