#[derive(Default)]
struct Trie { c: [Option<Box<Self>>; 26], num: usize, w: Option<String> }

impl Solution {
    pub fn find_words(mut board: Vec<Vec<char>>, words: Vec<String>) -> Vec<String> {
        let mut trie: Trie = Default::default();
        for w in words.into_iter() {
            let mut x = &mut trie;
            for c in w.as_bytes().iter().map(|ch| (ch-b'a') as usize) {
                x = x.c[c].get_or_insert_with(|| Default::default());
                x.num += 1;
            }
            x.w = Some(w)
        }

        fn dfs(b: &mut Vec<Vec<char>>, ans: &mut Vec<String>, mut t: &mut Trie,
               x: usize, y: usize) -> usiz