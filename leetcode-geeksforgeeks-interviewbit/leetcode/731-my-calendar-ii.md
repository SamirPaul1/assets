---
title: 731 My Calendar Ii
summary: 731 My Calendar Ii LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/731-my-calendar-ii", "/blog/posts/731-my-calendar-ii", "/731-my-calendar-ii"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 731-my-calendar-ii solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:731 My Calendar Ii/problem-solving.webp
    alt: 731 My Calendar Ii
    hiddenInList: true
    hiddenInSingle: false
---




---




```python
class MyCalendarTwo:

    def __init__(self):
        self.calendar = []
        self.overlaps = []

    def book(self, start: int, end: int) -> bool:
        for s, e in self.overlaps:
            if s < end and start < e: return False
        
        for s, e in self.calendar:
            if s < end and start < e:
                self.overlaps.append([max(s, start), min(e, end)])
        
        self.calendar.append([start, end])
        return True


# Time: O(N)
# Space: O(N)
```
