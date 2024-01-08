---
title: 1581 Customer Who Visited But Did Not Make Any Transactions
summary: 1581 Customer Who Visited But Did Not Make Any Transactions LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1581-customer-who-visited-but-did-not-make-any-transactions", "/blog/posts/1581-customer-who-visited-but-did-not-make-any-transactions", "/1581-customer-who-visited-but-did-not-make-any-transactions"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1581-customer-who-visited-but-did-not-make-any-transactions solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1581 Customer Who Visited But Did Not Make Any Transactions/problem-solving.webp
    alt: 1581 Customer Who Visited But Did Not Make Any Transactions
    hiddenInList: true
    hiddenInSingle: false
---




---




```sql
# Write your MySQL query statement below
select distinct customer_id, count(visit_id) as count_no_trans from Visits where visit_id not in (select distinct visit_id from Transactions) group by customer_id;


```
