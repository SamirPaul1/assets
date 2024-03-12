---
title: Fill Missing Data
summary: Fill Missing Data - Solution Explained
url: "/posts/fill-missing-data"
date: 2020-07-27T17:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Fill Missing Data LeetCode Solution Explained in all languages", "2887", "leetcode question 2887", "Fill Missing Data", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/fill-missing-data.webp
    alt: Fill Missing Data - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2887. Fill Missing Data](https://leetcode.com/problems/fill-missing-data)


## Description

<pre>
DataFrame <code>products</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| quantity    | int    |
| price       | int    |
+-------------+--------+
</pre>

<p>Write a solution to fill in the missing value as <code><strong>0</strong></code> in the <code>quantity</code> column.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<pre>
<strong class="example">Example 1:</strong>
<strong>Input:</strong>+-----------------+----------+-------+
| name            | quantity | price |
+-----------------+----------+-------+
| Wristwatch      | None     | 135   |
| WirelessEarbuds | None     | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |
+-----------------+----------+-------+
<strong>Output:
</strong>+-----------------+----------+-------+
| name            | quantity | price |
+-----------------+----------+-------+
| Wristwatch      | 0        | 135   |
| WirelessEarbuds | 0        | 821   |
| GolfClubs       | 779      | 9319  |
| Printer         | 849      | 3051  |
+-----------------+----------+-------+
<strong>Explanation:</strong> 
The quantity for Wristwatch and WirelessEarbuds are filled by 0.</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
import pandas as pd


def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
    products['quantity'] = products['quantity'].fillna(0)
    return products
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
