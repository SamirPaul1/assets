---
title: Display the First Three Rows
summary: Display the First Three Rows - Solution Explained
url: "/posts/display-the-first-three-rows"
date: 2020-07-28T01:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Display the First Three Rows LeetCode Solution Explained in all languages", "2879", "leetcode question 2879", "Display the First Three Rows", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/display-the-first-three-rows.webp
    alt: Display the First Three Rows - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2879. Display the First Three Rows](https://leetcode.com/problems/display-the-first-three-rows)


## Description

<pre>
DataFrame: <code>employees</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| employee_id | int    |
| name        | object |
| department  | object |
| salary      | int    |
+-------------+--------+
</pre>

<p>Write a solution to display the <strong>first <code>3</code> </strong>rows<strong> </strong>of this DataFrame.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>DataFrame employees
+-------------+-----------+-----------------------+--------+
| employee_id | name      | department            | salary |
+-------------+-----------+-----------------------+--------+
| 3           | Bob       | Operations            | 48675  |
| 90          | Alice     | Sales                 | 11096  |
| 9           | Tatiana   | Engineering           | 33805  |
| 60          | Annabelle | InformationTechnology | 37678  |
| 49          | Jonathan  | HumanResources        | 23793  |
| 43          | Khaled    | Administration        | 40454  |
+-------------+-----------+-----------------------+--------+
<strong>Output:</strong>
+-------------+---------+-------------+--------+
| employee_id | name    | department  | salary |
+-------------+---------+-------------+--------+
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |
+-------------+---------+-------------+--------+
<strong>Explanation:</strong> 
Only the first 3 rows are displayed.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.head(3)
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
