// String Without AAA or BBB
impl Solution {
    pub fn str_without3a3b(mut a: i32, mut b: i32) -> String {
        use std::mem::swap;
        let mut ans = vec![];
        let mut A = b'a';
        let mut B = b'b';
        if a < b { swap(&mut a, &mut b); swap(&mut A, &mut B); }
        while a >