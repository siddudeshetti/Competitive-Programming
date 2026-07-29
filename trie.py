class TrieNode:
    def __init__(self):
        self.children = {}
        self.end = False
        self.wordCount = 0
        self.prefixCount = 0


class Trie:

    def __init__(self):
        self.root = TrieNode()

    # Insert a word
    def insert(self, word):
        node = self.root

        for ch in word:
            if ch not in node.children:
                node.children[ch] = TrieNode()

            node = node.children[ch]

        node.end = True

    # Search complete word
    def search(self, word):
        node = self.root

        for ch in word:
            if ch not in node.children:
                return False

            node = node.children[ch]

        return node.end

    # Check prefix
    def startsWith(self, prefix):
        node = self.root

        for ch in prefix:
            if ch not in node.children:
                return False

            node = node.children[ch]

        return True
