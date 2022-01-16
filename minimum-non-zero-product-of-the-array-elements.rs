// Minimum Non-Zero Product of the Array Elements
impl Solution {
    pub fn min_non_zero_product(p: i32) -> i32 {
        const MOD: i64 = 1000000007;
        let mut s = ((1i64<<p)-