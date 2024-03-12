---
title: Triangle Judgement
summary: Triangle Judgement - Solution Explained
url: "/posts/triangle-judgement"
date: 2020-10-30T14:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Triangle Judgement LeetCode Solution Explained in all languages", "610", "leetcode question 610", "Triangle Judgement", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/triangle-judgement.webp
    alt: Triangle Judgement - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [610. Triangle Judgement](https://leetcode.com/problems/triangle-judgement)


## Description

<p>Table: <code>Triangle</code></p>

<pre>
+-------------+------+
| Column Name | Type |
+-------------+------+
| x           | int  |
| y           | int  |
| z           | int  |
+-------------+------+
In SQL, (x, y, z) is the primary key column for this table.
Each row of this table contains the lengths of three line segments.
</pre>

<p>&nbsp;</p>

<p>Report for every three line segments whether they can form a triangle.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Triangle table:
+----+----+----+
| x  | y  | z  |
+----+----+----+
| 13 | 15 | 30 |
| 10 | 20 | 15 |
+----+----+----+
<strong>Output:</strong> 
+----+----+----+----------+
| x  | y  | z  | triangle |
+----+----+----+----------+
| 13 | 15 | 30 | No       |
| 10 | 20 | 15 | Yes      |
+----+----+----+----------+
</pre>

## Solutions

### Solution 1: IF Statement + Triangle Inequality

The condition for whether three sides can form a triangle is that the sum of any two sides is greater than the third side. Therefore, we can use an `IF` statement to determine whether this condition is satisfied. If it is satisfied, we return `Yes`, otherwise we return `No`.

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    *,
    IF(x + y > z AND x + z > y AND y + z > x, 'Yes', 'No') AS triangle
FROM Triangle;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
