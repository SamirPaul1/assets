---
title: 0196 delete duplicate emails
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0196-delete-duplicate-emails solution
description: 0196 delete duplicate emails LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```sql
# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below


delete from Person where id not in 
(select * from (select min(id) from Person group by email) as p);



```
