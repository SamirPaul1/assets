---
title: Create a New Column
summary: Create a New Column - Solution Explained
url: "/posts/create-a-new-column"
date: 2020-07-27T23:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Create a New Column LeetCode Solution Explained in all languages", "2881", "leetcode question 2881", "Create a New Column", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/create-a-new-column.webp
    alt: Create a New Column - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2881. Create a New Column](https://leetcode.com/problems/create-a-new-column)


## Description

<pre>
DataFrame <code>employees</code>
+-------------+--------+
| Column Name | Type.  |
+-------------+--------+
| name        | object |
| salary      | int.   |
+-------------+--------+
</pre>

<p>A&nbsp;company plans to provide its employees with a bonus.</p>

<p>Write a solution to create a new column name <code>bonus</code> that contains the <strong>doubled values</strong> of the <code>salary</code> column.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Piper   | 4548   |
| Grace   | 28150  |
| Georgia | 1103   |
| Willow  | 6593   |
| Finn    | 74576  |
| Thomas  | 24433  |
+---------+--------+
<strong>Output:</strong>
+---------+--------+--------+
| name    | salary | bonus  |
+---------+--------+--------+
| Piper   | 4548   | 9096   |
| Grace   | 28150  | 56300  |
| Georgia | 1103   | 2206   |
| Willow  | 6593   | 13186  |
| Finn    | 74576  | 149152 |
| Thomas  | 24433  | 48866  |
+---------+--------+--------+
<strong>Explanation:</strong> 
A new column bonus is created by doubling the value in the column salary.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus'] = employees['salary'] * 2
    return employees
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
