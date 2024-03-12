---
title: Select Data
summary: Select Data - Solution Explained
url: "/posts/select-data"
date: 2020-07-28T00:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Select Data LeetCode Solution Explained in all languages", "2880", "leetcode question 2880", "Select Data", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/select-data.webp
    alt: Select Data - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2880. Select Data](https://leetcode.com/problems/select-data)


## Description

<pre>
DataFrame students
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| student_id  | int    |
| name        | object |
| age         | int    |
+-------------+--------+

</pre>

<p>Write a solution to select the name and age of the student with <code>student_id = 101</code>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong>Example 1:
Input:</strong>
+------------+---------+-----+
| student_id | name    | age |
+------------+---------+-----+
| 101        | Ulysses | 13  |
| 53         | William | 10  |
| 128        | Henry   | 6   |
| 3          | Henry   | 11  |
+------------+---------+-----+
<strong>Output:</strong>
+---------+-----+
| name    | age | 
+---------+-----+
| Ulysses | 13  |
+---------+-----+
<strong>Explanation:
</strong>Student Ulysses has student_id = 101, we select the name and age.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students[students['student_id'] == 101][['name', 'age']]
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
