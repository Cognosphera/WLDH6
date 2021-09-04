// Longest Common Subpath
impl Solution {
    pub fn longest_common_subpath(ab: i32, mut paths: Vec<Vec<i32>>) -> i32 {
        let np = paths.len();
        let mut a = vec![];
        let mut pos = vec![];
        for i in 0..np {
            a.append(&mut paths[i]