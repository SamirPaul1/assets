---
title: 692 top k frequent words
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 692-top-k-frequent-words solution
description: 692 top k frequent words LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```python
class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        wordCount = {word:0 for word in words}
        countWord = {}
        
        for word in words:
            wordCount[word] += 1
        
        for word in wordCount:
            if wordCount[word] not in countWord:
                countWord[wordCount[word]] = [word]       
            else:
                countWord[wordCount[word]].append(word)
        
        counts = sorted(list(set(wordCount.values())), reverse = True)
        
        res = []
        for count in counts:
            arr = sorted(countWord[count])
            if len(arr) + len(res) > k:
                e = len(arr) + len(res) - k
                res += arr[:-e]
            else:
                res += arr
                
        return res
```
