---
title: 0212 Word Search Ii
summary: 0212 Word Search Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "0212-word-search-ii LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0212 Word Search Ii - Solution Explained/problem-solving.webp
    alt: 0212 Word Search Ii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution(object):
    def findWords(self, board, words):
        if not board or not words: return []
        boardc = collections.Counter(sum(board,[]))
        words = [word for word in words if collections.Counter(word) <= boardc]
        trie = {}
        for word in words:
            node = trie
            for c in reversed(word):
                node = node.setdefault(c, {})
            node['$'] = word
            
        def find(i,j,node):
            if '$' in node: out.append(node.pop('$'))
            if not node: return
            tmp, board[i][j] = board[i][j], '#'
            
            for dx,dy in [(i+1, j),(i-1,j), (i,j+1), (i,j-1)]:
                if 0<=dx<m and 0<=dy<n and board[dx][dy] in node:
                    find(dx,dy,node[board[dx][dy]])
                    if not node[board[dx][dy]]: node.pop(board[dx][dy])
            board[i][j] = tmp
            
            return 0
                    
        m, n = len(board), len(board[0])
        out = []
        for i in range(m):
            for j in range(n):
                if board[i][j] in trie:
                    find(i,j,trie[board[i][j]])
                    if not trie[board[i][j]]: trie.pop(board[i][j])
                if len(words) == len(out): return out
        return out

```
