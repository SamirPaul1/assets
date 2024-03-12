---
title: Tasks Count in the Weekend
summary: Tasks Count in the Weekend - Solution Explained
url: "/posts/tasks-count-in-the-weekend"
date: 2020-08-21T06:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Tasks Count in the Weekend LeetCode Solution Explained in all languages", "2298", "leetcode question 2298", "Tasks Count in the Weekend", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/tasks-count-in-the-weekend.webp
    alt: Tasks Count in the Weekend - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2298. Tasks Count in the Weekend](https://leetcode.com/problems/tasks-count-in-the-weekend)


## Description

<p>Table: <code>Tasks</code></p>

<pre>
+-------------+------+
| Column Name | Type |
+-------------+------+
| task_id     | int  |
| assignee_id | int  |
| submit_date | date |
+-------------+------+
task_id is the primary key (column with unique values) for this table.
Each row in this table contains the ID of a task, the id of the assignee, and the submission date.
</pre>

<p>&nbsp;</p>

<p>Write a solution&nbsp;to report:</p>

<ul>
	<li>the number of tasks that were submitted during the weekend (Saturday, Sunday) as <code>weekend_cnt</code>, and</li>
	<li>the number of tasks that were submitted during the working days as <code>working_cnt</code>.</li>
</ul>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is shown in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Tasks table:
+---------+-------------+-------------+
| task_id | assignee_id | submit_date |
+---------+-------------+-------------+
| 1       | 1           | 2022-06-13  |
| 2       | 6           | 2022-06-14  |
| 3       | 6           | 2022-06-15  |
| 4       | 3           | 2022-06-18  |
| 5       | 5           | 2022-06-19  |
| 6       | 7           | 2022-06-19  |
+---------+-------------+-------------+
<strong>Output:</strong> 
+-------------+-------------+
| weekend_cnt | working_cnt |
+-------------+-------------+
| 3           | 3           |
+-------------+-------------+
<strong>Explanation:</strong> 
Task 1 was submitted on Monday.
Task 2 was submitted on Tuesday.
Task 3 was submitted on Wednesday.
Task 4 was submitted on Saturday.
Task 5 was submitted on Sunday.
Task 6 was submitted on Sunday.
3 tasks were submitted during the weekend.
3 tasks were submitted during the working days.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    SUM(WEEKDAY(submit_date) IN (5, 6)) AS weekend_cnt,
    SUM(WEEKDAY(submit_date) NOT IN (5, 6)) AS working_cnt
FROM Tasks;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
