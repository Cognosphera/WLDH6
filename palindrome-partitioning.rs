impl Solution {
    pub fn partition(s: String) -> Vec<Vec<String>> {
        #[derive(Default)]
        struct C<'a> { s: &'a str, r0: Vec<usize>, r1: Vec<usize>, ret: Vec<Vec<String>>, r: Vec<String> }
 