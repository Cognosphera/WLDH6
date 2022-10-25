// Super Ugly Number
impl Solution {
    pub fn nth_super_ugly_number(n: i32, primes: Vec<i32>) -> i32 {
        let m = primes.len();
        let mut a = vec![1];
   