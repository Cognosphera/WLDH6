impl Solution {
    pub fn word_break(s: String, word_dict: Vec<String>) -> Vec<String> {
        struct Sol<'a> { dict: &'a [String], ans: Vec<String>, parts: Vec<&'a str> }
        impl<'a> Sol<'a> {
            fn dfs(self: &mut Self, s: &str) {
     