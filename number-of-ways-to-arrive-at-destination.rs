// Number of Ways to Arrive at Destination
impl Solution {
    pub fn count_paths(n: i32, roads: Vec<Vec<i32>>) -> i32 {
        let n = n as usize;
        let mut d = vec![vec![std::i64::MAX/2; n]; n];
        let mut c = vec![vec![1i64; n]; n];
        for road in roads.into_iter() {
            let u = road[0] as usize;
            let v = road[1] as usize;
            d[u][v] = 