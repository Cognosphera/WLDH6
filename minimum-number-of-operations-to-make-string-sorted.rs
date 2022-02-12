// Minimum Number of Operations to Make String Sorted
const MOD: i64 = 1000000007;

impl Solution {
    fn inv(mut x: i32) -> i32 {
        let mut s = 1;
        while x > 1 {
            s = s * (MOD-MOD/x as i64) % MOD;
     