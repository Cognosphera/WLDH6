impl Solution {
    pub fn count_distinct(a: String) -> i32 {
        let a = a.as_bytes();
        let n = a.len();
        let m = 127;
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
            for i in n-k..n { x[h[r[i] as usize] as usize] = i as i32; }
       