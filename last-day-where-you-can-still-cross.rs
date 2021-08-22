
// Last Day Where You Can Still Cross
impl Solution {
    pub fn latest_day_to_cross(row: i32, col: i32, cells: Vec<Vec<i32>>) -> i32 {
        fn find(uf: &mut [usize], mut x: usize) -> usize {
          while uf[x] != x {
            uf[x] = uf[uf[x]];
            x = uf[x];
          }
          x
        }
        fn unite(uf: &mut [usize], mut x: usize, mut y: usize) {
          x = find(uf, x);
          y = find(uf, y);
          uf[x] = y;
        }

        let row = row as usize;
        let col = col as usize;
        let src = row*col;
        let mut uf = vec![0; src+2];
        let mut valid = vec![false; src+2];

        for i in 0..src+2 { uf[i] = i; }
        for (i, cell) in cells.into_iter().enumerate().rev() {
            let x = (cell[0]-1) as usize;