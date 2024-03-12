---
title: Customers Who Bought Products A and B but Not C
summary: Customers Who Bought Products A and B but Not C - Solution Explained
url: "/posts/customers-who-bought-products-a-and-b-but-not-c"
date: 2020-09-27T18:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Customers Who Bought Products A and B but Not C LeetCode Solution Explained in all languages", "1398", "leetcode question 1398", "Customers Who Bought Products A and B but Not C", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/customers-who-bought-products-a-and-b-but-not-c.webp
    alt: Customers Who Bought Products A and B but Not C - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1398. Customers Who Bought Products A and B but Not C](https://leetcode.com/problems/customers-who-bought-products-a-and-b-but-not-c)


## Description

<p>Table: <code>Customers</code></p>

<pre>
+---------------------+---------+
| Column Name         | Type    |
+---------------------+---------+
| customer_id         | int     |
| customer_name       | varchar |
+---------------------+---------+
customer_id is the column with unique values for this table.
customer_name is the name of the customer.</pre>

<p>&nbsp;</p>

<p>Table: <code>Orders</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| order_id      | int     |
| customer_id   | int     |
| product_name  | varchar |
+---------------+---------+
order_id is the column with unique values for this table.
customer_id is the id of the customer who bought the product &quot;product_name&quot;.
</pre>

<p>&nbsp;</p>

<p>Write a solution&nbsp;to report the customer_id and customer_name of customers who bought products <strong>&quot;A&quot;</strong>, <strong>&quot;B&quot;</strong> but did not buy the product <strong>&quot;C&quot;</strong> since we want to recommend them to purchase this product.</p>

<p>Return the result table <strong>ordered</strong> by <code>customer_id</code>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Customers table:
+-------------+---------------+
| customer_id | customer_name |
+-------------+---------------+
| 1           | Daniel        |
| 2           | Diana         |
| 3           | Elizabeth     |
| 4           | Jhon          |
+-------------+---------------+
Orders table:
+------------+--------------+---------------+
| order_id   | customer_id  | product_name  |
+------------+--------------+---------------+
| 10         |     1        |     A         |
| 20         |     1        |     B         |
| 30         |     1        |     D         |
| 40         |     1        |     C         |
| 50         |     2        |     A         |
| 60         |     3        |     A         |
| 70         |     3        |     B         |
| 80         |     3        |     D         |
| 90         |     4        |     C         |
+------------+--------------+---------------+
<strong>Output:</strong> 
+-------------+---------------+
| customer_id | customer_name |
+-------------+---------------+
| 3           | Elizabeth     |
+-------------+---------------+
<strong>Explanation:</strong> Only the customer_id with id 3 bought the product A and B but not the product C.
</pre>

## Solutions

### Solution 1: LEFT JOIN + GROUP BY + HAVING

We can use `LEFT JOIN` to join the `Customers` table and the `Orders` table, then group them by `customer_id`, and finally filter out the customers who have purchased products A and B but not product C.

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT customer_id, customer_name
FROM
    Customers
    LEFT JOIN Orders USING (customer_id)
GROUP BY 1
HAVING SUM(product_name = 'A') > 0 AND SUM(product_name = 'B') > 0 AND SUM(product_name = 'C') = 0
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
