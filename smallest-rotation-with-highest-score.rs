// Smallest Rotation with Highest Score
// If a[i]>i, the range [i+1, n+(i+1-a[i])) gets one point;
// otherwise, [0,i+1-a[i]) \union [i+1,n) gets one point.
// The two cases can be folded to d[i+1]+=1; d[(i+1-a[i])%n]-=1; in the difference array.
impl Solution {
    pub fn best_rotation(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let mut d = (0..n