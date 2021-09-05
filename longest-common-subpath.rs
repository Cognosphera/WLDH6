// Longest Common Subpath
impl Solution {
    pub fn longest_common_subpath(ab: i32, mut paths: Vec<Vec<i32>>) -> i32 {
        let np = paths.len();
        let mut a = vec![];
        let mut pos = vec![];
        for i in 0..np {
            a.append(&mut paths[i]);
            a.push(ab + i as i32);
            pos.resize(a.len(), i as i32);
        }

        let n = a.len();
        let m = ab as usize + np;
        let mut sa: Vec<i32> = Vec::with_capacity(n);
        let mut r: Vec<i32> = Vec::with_capacity(n);
        let mut h = vec![0; n.max(m)];
        let mut x: Vec<i32> = Vec::with_capacity(n);
        unsafe { sa.set_len(n); r.set_len(n); x.set_len(n); }
        for i in 0..n { h[a[i] as usize] += 1; }
        for i in 1..m { h[i] += h[i-1]; }
        for i in (0..n).rev() { let v = &mut h[a[i] as usize]; *v -= 1; sa[*v as usize] = i as i32; }
        r[sa[0] as usize] = 0;
        for i in 1..n { r[sa[i] as usize] = r[sa[i-1] as usize] + if a[sa[i] as usize]!=a[sa[i-1] as usize] {1} else {0}; }
        let mut k = 1;
        while r[sa[n-1] as usize] != (n-1) as i32 {
            for i in 0..n { h[r[sa[i] as usize] as usize] = i as i32;}
            for i in (0..n).rev() { if sa[i] >= k as i32 {
                let v = &mut h[r[sa[i] as usize-k] as usize]; x[*v as usize] = sa[i]-k as i32; *v -= 1; }}
          