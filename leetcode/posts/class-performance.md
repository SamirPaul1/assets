---
title: Class Performance
summary: Class Performance - Solution Explained
url: "/posts/class-performance"
date: 2020-07-23T11:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Class Performance LeetCode Solution Explained in all languages", "2989", "leetcode question 2989", "Class Performance", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/class-performance.webp
    alt: Class Performance - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2989. Class Performance](https://leetcode.com/problems/class-performance)


## Description

<p>Table: <code>Scores</code></p>

<pre>
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| student_id   | int     |
| student_name | varchar |
| assignment1  | int     |
| assignment2  | int     |
| assignment3  | int     |
+--------------+---------+
student_id is column of unique values for this table.
This table contains student_id, student_name, assignment1, assignment2, and assignment3.
</pre>

<p>Write a solution to calculate the <strong>difference</strong> in the <strong>total score</strong> (sum of all <code>3</code> assignments) between the <strong>highest score</strong> obtained by students and the <strong>lowest score</strong> obtained by them.</p>

<p>Return <em>the result table in <strong>any</strong> order</em><em>.</em></p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Scores table:
+------------+--------------+-------------+-------------+-------------+
| student_id | student_name | assignment1 | assignment2 | assignment3 |
+------------+--------------+-------------+-------------+-------------+
| 309        | Owen         | 88          | 47          | 87          |
| 321        | Claire       | 98          | 95          | 37          |     
| 338        | Julian       | 100         | 64          | 43          |  
| 423        | Peyton       | 60          | 44          | 47          |  
| 896        | David        | 32          | 37          | 50          | 
| 235        | Camila       | 31          | 53          | 69          | 
+------------+--------------+-------------+-------------+-------------+
<strong>Output</strong>
+---------------------+
| difference_in_score | 
+---------------------+
| 111                 | 
+---------------------+
<strong>Explanation</strong>
- student_id 309 has a total score of 88 + 47 + 87 = 222.
- student_id 321 has a total score of 98 + 95 + 37 = 230.
- student_id 338 has a total score of 100 + 64 + 43 = 207.
- student_id 423 has a total score of 60 + 44 + 47 = 151.
- student_id 896 has a total score of 32 + 37 + 50 = 119.
- student_id 235 has a total score of 31 + 53 + 69 = 153.
student_id 321 has the highest score of 230, while student_id 896 has the lowest score of 119. Therefore, the difference between them is 111.
</pre>

## Solutions

### Solution 1: Maximum and Minimum

We can use the `MAX` and `MIN` functions to get the maximum and minimum sums of `assignment1`, `assignment2`, and `assignment3`, respectively. Then, subtract the minimum from the maximum.

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    MAX(assignment1 + assignment2 + assignment3) - MIN(
        assignment1 + assignment2 + assignment3
    ) AS difference_in_score
FROM Scores;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
