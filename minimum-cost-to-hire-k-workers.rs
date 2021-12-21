// Minimum Cost to Hire K Workers
use std::cmp::Ordering;

struct Ratio { num: i64, den: i64 }
impl Ord for Ratio {
    fn cmp(&self, o: &Self) -> Ordering {
        (self.num as i64 * o.den as i64).cmp(&(self.den as i64 * o.num as i64))
    }
}
impl PartialOrd for Ratio {
    fn partial_cmp(&self, o: &Self) -> Option<Ordering> {
        Some(self.cmp(o))
    }
}
impl PartialEq for Ratio {
    fn eq(&self, o: &Self) -> bool {
   