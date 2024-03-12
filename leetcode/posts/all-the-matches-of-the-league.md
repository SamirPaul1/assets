---
title: All the Matches of the League
summary: All the Matches of the League - Solution Explained
url: "/posts/all-the-matches-of-the-league"
date: 2020-08-19T13:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["All the Matches of the League LeetCode Solution Explained in all languages", "2339", "leetcode question 2339", "All the Matches of the League", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/all-the-matches-of-the-league.webp
    alt: All the Matches of the League - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2339. All the Matches of the League](https://leetcode.com/problems/all-the-matches-of-the-league)


## Description

<p>Table: <code>Teams</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| team_name   | varchar |
+-------------+---------+
team_name is the column with unique values of this table.
Each row of this table shows the name of a team.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report&nbsp;all the possible matches of the league. Note that every two teams play two matches with each other, with one team being the <code>home_team</code> once and the other time being the <code>away_team</code>.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Teams table:
+-------------+
| team_name   |
+-------------+
| Leetcode FC |
| Ahly SC     |
| Real Madrid |
+-------------+
<strong>Output:</strong> 
+-------------+-------------+
| home_team   | away_team   |
+-------------+-------------+
| Real Madrid | Leetcode FC |
| Real Madrid | Ahly SC     |
| Leetcode FC | Real Madrid |
| Leetcode FC | Ahly SC     |
| Ahly SC     | Real Madrid |
| Ahly SC     | Leetcode FC |
+-------------+-------------+
<strong>Explanation:</strong> All the matches of the league are shown in the table.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT t1.team_name AS home_team, t2.team_name AS away_team
FROM
    Teams AS t1
    JOIN Teams AS t2
WHERE t1.team_name != t2.team_name;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
