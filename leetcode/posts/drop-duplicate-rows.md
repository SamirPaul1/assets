---
title: Drop Duplicate Rows
summary: Drop Duplicate Rows - Solution Explained
url: "/posts/drop-duplicate-rows"
date: 2020-07-27T22:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Drop Duplicate Rows LeetCode Solution Explained in all languages", "2882", "leetcode question 2882", "Drop Duplicate Rows", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/drop-duplicate-rows.webp
    alt: Drop Duplicate Rows - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2882. Drop Duplicate Rows](https://leetcode.com/problems/drop-duplicate-rows)


## Description

<pre>
DataFrame customers
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| customer_id | int    |
| name        | object |
| email       | object |
+-------------+--------+
</pre>

<p>There are some duplicate rows in the DataFrame based on the <code>email</code> column.</p>

<p>Write a solution to remove these duplicate rows and keep only the <strong>first</strong> occurrence.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong class="example">Example 1:</strong>
<strong>Input:</strong>
+-------------+---------+---------------------+
| customer_id | name    | email               |
+-------------+---------+---------------------+
| 1           | Ella    | emily@example.com   |
| 2           | David   | michael@example.com |
| 3           | Zachary | sarah@example.com   |
| 4           | Alice   | john@example.com    |
| 5           | Finn    | john@example.com    |
| 6           | Violet  | alice@example.com   |
+-------------+---------+---------------------+
<strong>Output: </strong> 
+-------------+---------+---------------------+
| customer_id | name    | email               |
+-------------+---------+---------------------+
| 1           | Ella    | emily@example.com   |
| 2           | David   | michael@example.com |
| 3           | Zachary | sarah@example.com   |
| 4           | Alice   | john@example.com    |
| 6           | Violet  | alice@example.com   |
+-------------+---------+---------------------+
<strong>Explanation:</strong>
Alic (customer_id = 4) and Finn (customer_id = 5) both use john@example.com, so only the first occurrence of this email is retained.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    return customers.drop_duplicates(subset=['email'])
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
