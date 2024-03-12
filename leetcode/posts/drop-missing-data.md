---
title: Drop Missing Data
summary: Drop Missing Data - Solution Explained
url: "/posts/drop-missing-data"
date: 2020-07-27T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Drop Missing Data LeetCode Solution Explained in all languages", "2883", "leetcode question 2883", "Drop Missing Data", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/drop-missing-data.webp
    alt: Drop Missing Data - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2883. Drop Missing Data](https://leetcode.com/problems/drop-missing-data)


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

<p>There are some rows having missing values in the <code>name</code> column.</p>

<p>Write a solution to remove the rows with missing values.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>+------------+---------+-----+
| student_id | name    | age |
+------------+---------+-----+
| 32         | Piper   | 5   |
| 217        | None    | 19  |
| 779        | Georgia | 20  |
| 849        | Willow  | 14  |
+------------+---------+-----+
<strong>Output:
</strong>+------------+---------+-----+
| student_id | name    | age |
+------------+---------+-----+
| 32         | Piper   | 5   |
| 779        | Georgia | 20  | 
| 849        | Willow  | 14  | 
+------------+---------+-----+
<strong>Explanation:</strong> 
Student with id 217 havs empty value in the name column, so it will be removed.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    return students[students['name'].notnull()]
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
