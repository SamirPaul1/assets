---
title: Recyclable and Low Fat Products
summary: Recyclable and Low Fat Products - Solution Explained
url: "/posts/recyclable-and-low-fat-products"
date: 2020-09-12T19:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Recyclable and Low Fat Products LeetCode Solution Explained in all languages", "1757", "leetcode question 1757", "Recyclable and Low Fat Products", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/recyclable-and-low-fat-products.webp
    alt: Recyclable and Low Fat Products - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1757. Recyclable and Low Fat Products](https://leetcode.com/problems/recyclable-and-low-fat-products)


## Description

<p>Table: <code>Products</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_id  | int     |
| low_fats    | enum    |
| recyclable  | enum    |
+-------------+---------+
product_id is the primary key (column with unique values) for this table.
low_fats is an ENUM (category) of type (&#39;Y&#39;, &#39;N&#39;) where &#39;Y&#39; means this product is low fat and &#39;N&#39; means it is not.
recyclable is an ENUM (category) of types (&#39;Y&#39;, &#39;N&#39;) where &#39;Y&#39; means this product is recyclable and &#39;N&#39; means it is not.</pre>

<p>&nbsp;</p>

<p>Write a solution to find the ids of products that are both low fat and recyclable.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Products table:
+-------------+----------+------------+
| product_id  | low_fats | recyclable |
+-------------+----------+------------+
| 0           | Y        | N          |
| 1           | Y        | Y          |
| 2           | N        | Y          |
| 3           | Y        | Y          |
| 4           | N        | N          |
+-------------+----------+------------+
<strong>Output:</strong> 
+-------------+
| product_id  |
+-------------+
| 1           |
| 3           |
+-------------+
<strong>Explanation:</strong> Only products 1 and 3 are both low fat and recyclable.
</pre>

## Solutions

### Solution 1: Conditional Filtering

We can directly filter the product IDs where `low_fats` is `Y` and `recyclable` is `Y`.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def find_products(products: pd.DataFrame) -> pd.DataFrame:
    rs = products[(products["low_fats"] == "Y") & (products["recyclable"] == "Y")]
    rs = rs[["product_id"]]
    return rs
```
{{< /terminal >}}

{{< terminal title="SQL Code" >}}
```sql
SELECT
    product_id
FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y';
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
