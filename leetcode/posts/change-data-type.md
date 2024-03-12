---
title: Change Data Type
summary: Change Data Type - Solution Explained
url: "/posts/change-data-type"
date: 2020-07-27T18:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Change Data Type LeetCode Solution Explained in all languages", "2886", "leetcode question 2886", "Change Data Type", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/change-data-type.webp
    alt: Change Data Type - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2886. Change Data Type](https://leetcode.com/problems/change-data-type)


## Description

<pre>
DataFrame <code>students</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| student_id  | int    |
| name        | object |
| age         | int    |
| grade       | float  |
+-------------+--------+
</pre>

<p>Write a solution to correct the errors:</p>

<p>The <code>grade</code> column is stored as floats,&nbsp;convert it to integers.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong class="example">Example 1:</strong>
<strong>Input:
</strong>DataFrame students:
+------------+------+-----+-------+
| student_id | name | age | grade |
+------------+------+-----+-------+
| 1          | Ava  | 6   | 73.0  |
| 2          | Kate | 15  | 87.0  |
+------------+------+-----+-------+
<strong>Output:
</strong>+------------+------+-----+-------+
| student_id | name | age | grade |
+------------+------+-----+-------+
| 1          | Ava  | 6   | 73    |
| 2          | Kate | 15  | 87    |
+------------+------+-----+-------+
<strong>Explanation:</strong> 
The data types of the column grade is converted to int.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    students['grade'] = students['grade'].astype(int)
    return students
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
