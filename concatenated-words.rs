///
#[derive(Default)]
struct Trie { c: [Option<Box<Self>>; 26], is_word: bool }

impl Solution {
    pub fn find_all_concatenated_words_in_a_dict(mut words: Vec<String>) -> Vec<String> {
        words.sort_by_key(|w| w.len());
        