// Strange Printer II
impl Solution {
    pub fn is_printable(grid: Vec<Vec<i32>>) -> bool {
        use std::collections::HashSet;
        fn cycle(u: usize, vis: &mut Vec<usize>, adj: &Vec<HashSet<usize>>) -> bool {
            vis[u] = 1;
            if adj[u].iter().any(|&v| vis[v] == 1 || vis[v] == 0 && cycle(v, vis, adj)) {
                return true;
            }
            vis[u] = 2;
            false
        }
        let nc = 61;
        let m = grid.len();
        let n = grid[0].len();
        let mut adj: Vec<HashSet<usize>> = vec![HashSet::new(); nc];
        for c in 1..nc {
            let mut x0 = m; let mut x1 = 0;
            let mut y0 = n; let mut y1 = 0;
    