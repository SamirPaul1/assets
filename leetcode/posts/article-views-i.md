---
title: Article Views I
summary: Article Views I - Solution Explained
url: "/posts/article-views-i"
date: 2020-10-08T04:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Article Views I LeetCode Solution Explained in all languages", "1148", "leetcode question 1148", "Article Views I", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/article-views-i.webp
    alt: Article Views I - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1148. Article Views I](https://leetcode.com/problems/article-views-i)


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
There is no primary key (column with unique values) for this table, the table may have duplicate rows.
Each row of this table indicates that some viewer viewed an article (written by some author) on some date. 
Note that equal author_id and viewer_id indicate the same person.
</pre>

<p>&nbsp;</p>

<p>Write a solution to find all the authors that viewed at least one of their own articles.</p>

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
| 4    |
| 7    |
+------+
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
