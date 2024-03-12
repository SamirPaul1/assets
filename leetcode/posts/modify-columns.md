---
title: Modify Columns
summary: Modify Columns - Solution Explained
url: "/posts/modify-columns"
date: 2020-07-27T20:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Modify Columns LeetCode Solution Explained in all languages", "2884", "leetcode question 2884", "Modify Columns", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/modify-columns.webp
    alt: Modify Columns - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2884. Modify Columns](https://leetcode.com/problems/modify-columns)


## Description

<pre>
DataFrame <code>employees</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| salary      | int    |
+-------------+--------+
</pre>

<p>A company intends to give its employees a pay rise.</p>

<p>Write a solution to <strong>modify</strong> the <code>salary</code> column by multiplying each salary by 2.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 19666  |
| Piper   | 74754  |
| Mia     | 62509  |
| Ulysses | 54866  |
+---------+--------+
<strong>Output:
</strong>+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 39332  |
| Piper   | 149508 |
| Mia     | 125018 |
| Ulysses | 109732 |
+---------+--------+
<strong>Explanation:
</strong>Every salary has been doubled.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['salary'] *= 2
    return employees
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
