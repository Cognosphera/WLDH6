///
#[derive(Default)]
struct Trie { c: [Option<Box<Self>>; 26], is_word: bool }

impl Solution {
    pub fn find_all_concatenated_words_in_a_dict(mut words: Vec<String>) -> Vec<String> {
        words.sort_by_key(|w| w.len());
        let mut trie: Trie = Default::default();
        let mut vis: Vec<isize> = vec![0; words.last().unwrap().len()+1];
        let mut q: Vec<usize> = vec![];
        let mut tick = 0;
        let mut ans: Vec<String> = vec![];
        for ww in words.into_iter() {
            if ww.is_empty() { continue; }
            let w = ww.as_bytes();
            q.clear();
            q.push(0);
            tick += 1;
            while let Some(bgn) = q.pop() {
                let mut t: &Trie = &mut trie;
                for i in bgn..w.len() {
                    if let Some(t1) = &t.c[(w[i]-b'a') as usize] {
                        t = t1;
                        if t.is_word && vis[i+1] != tick {
                            vis[i+1] = tick;
                            q.push(i+1);
                        }
                    } else {
                        break;
                    }
                }
                if vis[w.len()] == tick {
                    ans.push(ww.clone());
                    break;
                }
            }

            le