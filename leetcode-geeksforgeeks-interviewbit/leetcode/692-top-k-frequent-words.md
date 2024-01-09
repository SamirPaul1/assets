---
title: 692 Top K Frequent Words
summary: 692 Top K Frequent Words LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "692-top-k-frequent-words LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:692 Top K Frequent Words - Solution Explained/problem-solving.webp
    alt: 692 Top K Frequent Words
    hiddenInList: true
    hiddenInSingle: false
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
