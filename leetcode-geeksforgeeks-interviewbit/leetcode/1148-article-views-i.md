---
title: 1148 Article Views I
summary: 1148 Article Views I LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1148-article-views-i", "/blog/posts/1148-article-views-i", "/1148-article-views-i"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1148-article-views-i solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1148 Article Views I/problem-solving.webp
    alt: 1148 Article Views I
    hiddenInList: true
    hiddenInSingle: false
---




---




```sql
# Write your MySQL query statement below
select distinct author_id as id from Views where author_id = viewer_id order by id asc;
```
