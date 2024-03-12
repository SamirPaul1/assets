---
title: Article Views II
summary: Article Views II - Solution Explained
url: "/posts/article-views-ii"
date: 2020-10-08T03:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Article Views II LeetCode Solution Explained in all languages", "1149", "leetcode question 1149", "Article Views II", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/article-views-ii.webp
    alt: Article Views II - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1149. Article Views II](https://leetcode.com/problems/article-views-ii)


## Description

<p>Table: <code>Views</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| article_id    | int     |
| author_id     | int     |
| viewer_id     | int     |
| view_date     | date    |
+---------------+---------+
This table may have duplicate rows.
Each row of this table indicates that some viewer viewed an article (written by some author) on some date. 
Note that equal author_id and viewer_id indicate the same person.</pre>

<p>&nbsp;</p>

<p>Write a solution to find all the people who viewed more than one article on the same date.</p>

<p>Return the result table sorted by <code>id</code> in ascending order.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Views table:
+------------+-----------+-----------+------------+
| article_id | author_id | viewer_id | view_date  |
+------------+-----------+-----------+------------+
| 1          | 3         | 5         | 2019-08-01 |
| 3          | 4         | 5         | 2019-08-01 |
| 1          | 3         | 6         | 2019-08-02 |
| 2          | 7         | 7         | 2019-08-01 |
| 2          | 7         | 6         | 2019-08-02 |
| 4          | 7         | 1         | 2019-07-22 |
| 3          | 4         | 4         | 2019-07-21 |
| 3          | 4         | 4         | 2019-07-21 |
+------------+-----------+-----------+------------+
<strong>Output:</strong> 
+------+
| id   |
+------+
| 5    |
| 6    |
+------+
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT DISTINCT viewer_id AS id
FROM Views
GROUP BY viewer_id, view_date
HAVING COUNT(DISTINCT article_id) > 1
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
