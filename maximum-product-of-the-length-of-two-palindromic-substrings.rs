// Maximum Product of the Length of Two Palindromic Substrings
impl Solution {
    pub fn max_product(s: String) -> i64 {
        let a = s.as_bytes(); let n = a.len();
        let mut r = vec![0; n];
        let mut f = 0; let mut g = 0;
        for i in 0..n {
            r[i] = if i < g && r[2*f-i] != g-i { r[2*f-i].min(g-i) } else {
                f = i;
                g = g.max