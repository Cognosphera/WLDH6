// Count Ways to Build Rooms in an Ant Colony
impl Solution {
    pub fn ways_to_build_rooms(prev: Vec<i32>) -> i32 {
        const MOD: usize = 1000000007;
        let n = prev.len();
        let mut inv = vec![1; n];
        let mut fac = vec![1; n];
        let mut invfac = vec![1; n];
        fac[0] = 1; invfac[0] = 1;
        fac[1] = 1; invfac[1] = 1; inv[1] = 1;
        for i in 2..n {
            inv[i] = ((MOD-MOD/i)*(inv[MOD%i] as usize)%MOD) as i32;
       