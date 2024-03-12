---
title: Concatenate the Name and the Profession
summary: Concatenate the Name and the Profession - Solution Explained
url: "/posts/concatenate-the-name-and-the-profession"
date: 2020-08-12T16:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Concatenate the Name and the Profession LeetCode Solution Explained in all languages", "2504", "leetcode question 2504", "Concatenate the Name and the Profession", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/concatenate-the-name-and-the-profession.webp
    alt: Concatenate the Name and the Profession - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2504. Concatenate the Name and the Profession](https://leetcode.com/problems/concatenate-the-name-and-the-profession)


## Description

<p>Table: <code>Person</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| person_id   | int     |
| name        | varchar |
| profession  | ENUM    |
+-------------+---------+
person_id is the primary key (column with a unique value) for this table.
Each row in this table contains a person&#39;s ID, name, and profession.
The profession column in an enum of the type (&#39;Doctor&#39;, &#39;Singer&#39;, &#39;Actor&#39;, &#39;Player&#39;, &#39;Engineer&#39;, or &#39;Lawyer&#39;)
</pre>

<p>&nbsp;</p>

<p>Write a solution to report each person&#39;s name followed by the first letter of their profession enclosed in parentheses.</p>

<p>Return the result table <strong>ordered</strong> by <code>person_id</code> in <strong>descending order</strong>.</p>

<p>The result format is shown in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Person table:
+-----------+-------+------------+
| person_id | name  | profession |
+-----------+-------+------------+
| 1         | Alex  | Singer     |
| 3         | Alice | Actor      |
| 2         | Bob   | Player     |
| 4         | Messi | Doctor     |
| 6         | Tyson | Engineer   |
| 5         | Meir  | Lawyer     |
+-----------+-------+------------+
<strong>Output:</strong> 
+-----------+----------+
| person_id | name     |
+-----------+----------+
| 6         | Tyson(E) |
| 5         | Meir(L)  |
| 4         | Messi(D) |
| 3         | Alice(A) |
| 2         | Bob(P)   |
| 1         | Alex(S)  |
+-----------+----------+
<strong>Explanation:</strong> Note that there should not be any white space between the name and the first letter of the profession.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT person_id, CONCAT(name, "(", SUBSTRING(profession, 1, 1), ")") AS name
FROM Person
ORDER BY person_id DESC;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
