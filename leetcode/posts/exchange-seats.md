---
title: Exchange Seats
summary: Exchange Seats - Solution Explained
url: "/posts/exchange-seats"
date: 2020-10-29T22:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Exchange Seats LeetCode Solution Explained in all languages", "626", "leetcode question 626", "Exchange Seats", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/exchange-seats.webp
    alt: Exchange Seats - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [626. Exchange Seats](https://leetcode.com/problems/exchange-seats)


## Description

<p>Table: <code>Seat</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| student     | varchar |
+-------------+---------+
id is the primary key (unique value) column for this table.
Each row of this table indicates the name and the ID of a student.
id is a continuous increment.
</pre>

<p>&nbsp;</p>

<p>Write a solution to swap the seat id of every two consecutive students. If the number of students is odd, the id of the last student is not swapped.</p>

<p>Return the result table ordered by <code>id</code> <strong>in ascending order</strong>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Seat table:
+----+---------+
| id | student |
+----+---------+
| 1  | Abbot   |
| 2  | Doris   |
| 3  | Emerson |
| 4  | Green   |
| 5  | Jeames  |
+----+---------+
<strong>Output:</strong> 
+----+---------+
| id | student |
+----+---------+
| 1  | Doris   |
| 2  | Abbot   |
| 3  | Green   |
| 4  | Emerson |
| 5  | Jeames  |
+----+---------+
<strong>Explanation:</strong> 
Note that if the number of students is odd, there is no need to change the last one&#39;s seat.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT s1.id, COALESCE(s2.student, s1.student) AS student
FROM
    Seat AS s1
    LEFT JOIN Seat AS s2 ON (s1.id + 1) ^ 1 - 1 = s2.id
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    id + (
        CASE
            WHEN id % 2 = 1
            AND id != (SELECT MAX(id) FROM Seat) THEN 1
            WHEN id % 2 = 0 THEN -1
            ELSE 0
        END
    ) AS id,
    student
FROM Seat
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 3

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    RANK() OVER (ORDER BY (id - 1) ^ 1) AS id,
    student
FROM Seat;
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 4

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT
    CASE
        WHEN id & 1 = 0 THEN id - 1
        WHEN ROW_NUMBER() OVER (ORDER BY id) != COUNT(id) OVER () THEN id + 1
        ELSE id
    END AS id,
    student
FROM Seat
ORDER BY 1;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
