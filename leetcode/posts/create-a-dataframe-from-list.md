---
title: Create a DataFrame from List
summary: Create a DataFrame from List - Solution Explained
url: "/posts/create-a-dataframe-from-list"
date: 2020-07-28T03:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Create a DataFrame from List LeetCode Solution Explained in all languages", "2877", "leetcode question 2877", "Create a DataFrame from List", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/create-a-dataframe-from-list.webp
    alt: Create a DataFrame from List - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2877. Create a DataFrame from List](https://leetcode.com/problems/create-a-dataframe-from-list)


## Description

<p>Write a solution to <strong>create</strong> a DataFrame from a 2D list called <code>student_data</code>. This 2D list contains the IDs and ages of some students.</p>

<p>The DataFrame should have two columns, <code>student_id</code> and <code>age</code>, and be in the same order as the original 2D list.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>student_data:<strong>
</strong><code>[
  [1, 15],
  [2, 11],
  [3, 11],
  [4, 20]
]</code>
<strong>Output:</strong>
+------------+-----+
| student_id | age |
+------------+-----+
| 1          | 15  |
| 2          | 11  |
| 3          | 11  |
| 4          | 20  |
+------------+-----+
<strong>Explanation:</strong>
A DataFrame was created on top of student_data, with two columns named <code>student_id</code> and <code>age</code>.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    return pd.DataFrame(student_data, columns=['student_id', 'age'])
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
