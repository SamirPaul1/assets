---
title: The Airport With the Most Traffic
summary: The Airport With the Most Traffic - Solution Explained
url: "/posts/the-airport-with-the-most-traffic"
date: 2020-08-29T00:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["The Airport With the Most Traffic LeetCode Solution Explained in all languages", "2112", "leetcode question 2112", "The Airport With the Most Traffic", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/the-airport-with-the-most-traffic.webp
    alt: The Airport With the Most Traffic - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2112. The Airport With the Most Traffic](https://leetcode.com/problems/the-airport-with-the-most-traffic)


## Description

<p>Table: <code>Flights</code></p>

<pre>
+-------------------+------+
| Column Name       | Type |
+-------------------+------+
| departure_airport | int  |
| arrival_airport   | int  |
| flights_count     | int  |
+-------------------+------+
(departure_airport, arrival_airport) is the primary key column (combination of columns with unique values) for this table.
Each row of this table indicates that there were flights_count flights that departed from departure_airport and arrived at arrival_airport.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report the ID of the airport with the <strong>most traffic</strong>. The airport with the most traffic is the airport that has the largest total number of flights that either departed from or arrived at the airport. If there is more than one airport with the most traffic, report them all.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Flights table:
+-------------------+-----------------+---------------+
| departure_airport | arrival_airport | flights_count |
+-------------------+-----------------+---------------+
| 1                 | 2               | 4             |
| 2                 | 1               | 5             |
| 2                 | 4               | 5             |
+-------------------+-----------------+---------------+
<strong>Output:</strong> 
+------------+
| airport_id |
+------------+
| 2          |
+------------+
<strong>Explanation:</strong> 
Airport 1 was engaged with 9 flights (4 departures, 5 arrivals).
Airport 2 was engaged with 14 flights (10 departures, 4 arrivals).
Airport 4 was engaged with 5 flights (5 arrivals).
The airport with the most traffic is airport 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> 
Flights table:
+-------------------+-----------------+---------------+
| departure_airport | arrival_airport | flights_count |
+-------------------+-----------------+---------------+
| 1                 | 2               | 4             |
| 2                 | 1               | 5             |
| 3                 | 4               | 5             |
| 4                 | 3               | 4             |
| 5                 | 6               | 7             |
+-------------------+-----------------+---------------+
<strong>Output:</strong> 
+------------+
| airport_id |
+------------+
| 1          |
| 2          |
| 3          |
| 4          |
+------------+
<strong>Explanation:</strong> 
Airport 1 was engaged with 9 flights (4 departures, 5 arrivals).
Airport 2 was engaged with 9 flights (5 departures, 4 arrivals).
Airport 3 was engaged with 9 flights (5 departures, 4 arrivals).
Airport 4 was engaged with 9 flights (4 departures, 5 arrivals).
Airport 5 was engaged with 7 flights (7 departures).
Airport 6 was engaged with 7 flights (7 arrivals).
The airports with the most traffic are airports 1, 2, 3, and 4.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
WITH
    T AS (
        SELECT * FROM Flights
        UNION
        SELECT arrival_airport, departure_airport, flights_count FROM Flights
    ),
    P AS (
        SELECT departure_airport, SUM(flights_count) AS cnt
        FROM T
        GROUP BY 1
    )
SELECT departure_airport AS airport_id
FROM P
WHERE cnt = (SELECT MAX(cnt) FROM P);
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
