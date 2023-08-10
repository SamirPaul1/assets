---
title: 1581 customer who visited but did not make any transactions
tags: leetcode
categories: leetcode
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1581-customer-who-visited-but-did-not-make-any-transactions solution
description: 1581 customer who visited but did not make any transactions LeetCode Solution Explained
cover: /assets/img/leetcode-cover-img.webp
---




---




```sql
# Write your MySQL query statement below
select distinct customer_id, count(visit_id) as count_no_trans from Visits where visit_id not in (select distinct visit_id from Transactions) group by customer_id;


```
