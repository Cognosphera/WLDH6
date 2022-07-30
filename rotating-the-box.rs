// Rotating the Box
impl Solution {
    pub fn rotate_the_box(b: Vec<Vec<char>>) -> Vec<Vec<char>> {
        let m = b.len();
        let n = b[0].len();
        let mut a = vec![vec!['.';