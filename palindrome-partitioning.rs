impl Solution {
    pub fn partition(s: String) -> Vec<Vec<String>> {
        #[derive(Default)]
        struct C<'a> { s: &'a str, r0: Vec<usize>, r1: Vec<usize>, ret: Vec<Vec<String>>, r: Vec<String> }
        impl<'a> C<'a> {
            fn dfs(&mut self, i: usize) {
                if i == self.s.len() {
                    self.ret.push(self.r.clone());
                    return;
                }
                for j in 1..=self.s.len()-i {
                    if (if j%2!=0 { &self.r1 } else { &self.r0 })[i+j/2] >= (j+1)/2 {
                        self.r.push(self.s[i..i+j].to_string());
                        self.dfs(i+j);
                        self.r.pop();
                    }
                }
            }
        }

        let a = s.as_bytes(); let n = a.len();
        let mut f = 0; let mut g = 0;
        let mut c = C { s: &s, r0: vec![0; n], r1: vec![0; n], ..Default::default() };
        for i in 0..n {
            c.r1[i] = if i < g && c.r1[2*f-i] != g-i { c.r1[2*f-i].min(g-i) } else {
                f = i;
                g = g.max(i);
                while g < n && 2*f >= g && a[2*f-g] == a[g] { g += 1; }
                g-f
            }
        }
        g = 0;
        for i in 0..n {
            c.r0[i] = if i < g && c.r0[2*f-i] != g-