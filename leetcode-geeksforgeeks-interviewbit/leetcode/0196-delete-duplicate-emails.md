---
title: 0196 Delete Duplicate Emails
summary: 0196 Delete Duplicate Emails LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0196-delete-duplicate-emails", "/blog/posts/0196-delete-duplicate-emails", "/0196-delete-duplicate-emails"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0196-delete-duplicate-emails solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0196 Delete Duplicate Emails/problem-solving.webp
    alt: 0196 Delete Duplicate Emails
    hiddenInList: true
    hiddenInSingle: false
---




---




```sql
# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below


delete from Person where id not in 
(select * from (select min(id) from Person group by email) as p);



```
