// Painting a Grid With Three Different Colors
impl Solution {
    pub fn color_the_grid(m: i32, n: i32) -> i32 {
        const MOD: i32 = 1000000007;
        let ns = 3<<m-1;
        let mut tr = vec![vec![]; ns];
        for i in 0..ns {
            for j in 0..ns {
                let mut i0 = i>>m-1;
                let mut j0 = j>>m-1;
                let mut ok = i0 != j0;
                for k in 0..m-1 {
                    i0 = (i0+1+(i>>k&1))%3;
                    j0 = (j0+1+(j>>k&1))%3;
                    ok = ok && i0 != j0;
                }
                if ok { t