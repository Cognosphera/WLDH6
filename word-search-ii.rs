#[derive(Default)]
struct Trie { c: [Option<Box<Self>>; 26], num: usize, w: Opti