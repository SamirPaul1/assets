---
title: 2878 Get The Size Of A Dataframe
summary: 2878 Get The Size Of A Dataframe LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "2878 Get The Size Of A Dataframe LeetCode Solution Explained in all languages"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2878 Get The Size Of A Dataframe - Solution Explained/problem-solving.webp
    alt: 2878 Get The Size Of A Dataframe
    hiddenInList: true
    hiddenInSingle: false
---


# [2878. Get the Size of a DataFrame](https://leetcode.com/problems/get-the-size-of-a-dataframe)


## Description

<pre>
DataFrame <code>players:</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| player_id   | int    |
| name        | object |
| age         | int    |
| position    | object |
| ...         | ...    |
+-------------+--------+
</pre>

<p>Write a solution to calculate and display the <strong>number of rows and columns</strong> of <code>players</code>.</p>

<p>Return the result as an array:</p>

<p><code>[number of rows, number of columns]</code></p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>+-----------+----------+-----+-------------+--------------------+
| player_id | name     | age | position    | team               |
+-----------+----------+-----+-------------+--------------------+
| 846       | Mason    | 21  | Forward     | RealMadrid         |
| 749       | Riley    | 30  | Winger      | Barcelona          |
| 155       | Bob      | 28  | Striker     | ManchesterUnited   |
| 583       | Isabella | 32  | Goalkeeper  | Liverpool          |
| 388       | Zachary  | 24  | Midfielder  | BayernMunich       |
| 883       | Ava      | 23  | Defender    | Chelsea            |
| 355       | Violet   | 18  | Striker     | Juventus           |
| 247       | Thomas   | 27  | Striker     | ParisSaint-Germain |
| 761       | Jack     | 33  | Midfielder  | ManchesterCity     |
| 642       | Charlie  | 36  | Center-back | Arsenal            |
+-----------+----------+-----+-------------+--------------------+<strong>
Output:
</strong>[10, 5]
<strong>Explanation:</strong>
This DataFrame contains 10 rows and 5 columns.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

```python
import pandas as pd


def getDataframeSize(players: pd.DataFrame) -> List[int]:
    return list(players.shape)
```

<!-- tabs:end -->

<!-- end -->
