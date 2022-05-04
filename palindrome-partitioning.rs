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

