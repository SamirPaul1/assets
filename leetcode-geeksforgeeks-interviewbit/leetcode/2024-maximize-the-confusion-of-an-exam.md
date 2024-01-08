---
title: 2024 Maximize The Confusion Of An Exam
summary: 2024 Maximize The Confusion Of An Exam LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/2024-maximize-the-confusion-of-an-exam", "/blog/posts/2024-maximize-the-confusion-of-an-exam", "/2024-maximize-the-confusion-of-an-exam"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 2024-maximize-the-confusion-of-an-exam solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:2024 Maximize The Confusion Of An Exam/problem-solving.webp
    alt: 2024 Maximize The Confusion Of An Exam
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class Solution:
    def maxConsecutiveAnswers(self, answerKey: str, k: int) -> int:
        l = 0; r = 0
        frequency = {}
        maxFrequency = 0
        ans = 0
        
        for r in range(len(answerKey)):
            if answerKey[r] not in frequency:
                frequency[answerKey[r]] = 1
            else:
                frequency[answerKey[r]] += 1
            maxFrequency = max(maxFrequency, frequency[answerKey[r]])
            
            while r - l - maxFrequency >= k:
                frequency[answerKey[l]] -= 1
                l += 1
            
            ans = max(ans, r - l + 1)
        
        return ans
```
