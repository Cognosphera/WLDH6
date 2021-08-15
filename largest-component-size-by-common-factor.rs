// Largest Component Size by Common Factor
impl Solution {
    pub fn largest_component_size(nums: Vec<i32>) -> i32 {
        fn find(uf: &mut Vec<i32>, mut x: i32) -> usize {
            while uf[x as usize] != x {
                uf[x as usize] = uf[uf[x as usize] as usize];
                x = uf[x as usize];
            }
            x as usize
        }
        let m = nums.iter().max().unwrap() + 1;
 