---
title: 2669 Count Artist Occurrences On Spotify Ranking List
summary: 2669 Count Artist Occurrences On Spotify Ranking List LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2669 Count Artist Occurrences On Spotify Ranking List LeetCode Solution Explained in all languages", "2669 Count Artist Occurrences On Spotify Ranking List", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2669 Count Artist Occurrences On Spotify Ranking List - Solution Explained/problem-solving.webp
    alt: 2669 Count Artist Occurrences On Spotify Ranking List
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2669. Count Artist Occurrences On Spotify Ranking List](https://leetcode.com/problems/count-artist-occurrences-on-spotify-ranking-list)


## Description

<p>Table: <code><font face="monospace">Spotify</font></code></p>

<pre>
+-------------+---------+ 
| Column Name | Type    | 
+-------------+---------+ 
| id          | int     | 
| track_name  | varchar |
| artist      | varchar |
+-------------+---------+
<code>id</code> is the primary key (column with unique values) for this table.
Each row contains an id, track_name, and artist.
</pre>

<p>Write a solution to find how many times each artist appeared on the Spotify ranking list.</p>

<p>Return the result table having the artist&#39;s name along with the corresponding number of occurrences&nbsp;ordered by occurrence count in&nbsp;<strong>descending </strong>order. If the occurrences are equal, then it&rsquo;s ordered by the artist&rsquo;s name in <strong>ascending</strong> order.</p>

<p>The result format is in the following example​​​​​.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>Spotify table: 
+---------+--------------------+------------+ 
| id      | track_name         | artist     |  
+---------+--------------------+------------+
| 303651  | Heart Won&#39;t Forget | Sia        |
| 1046089 | Shape of you       | Ed Sheeran |
| 33445   | I&#39;m the one        | DJ Khalid  |
| 811266  | Young Dumb &amp; Broke | DJ Khalid  | 
| 505727  | Happier            | Ed Sheeran |
+---------+--------------------+------------+ 
<strong>Output:
</strong>+------------+-------------+
| artist     | occurrences | 
+------------+-------------+
| DJ Khalid  | 2           |
| Ed Sheeran | 2           |
| Sia        | 1           | 
+------------+-------------+ 

<strong>Explanation: </strong>The count of occurrences is listed in descending order under the column name &quot;occurrences&quot;. If the number of occurrences is the same, the artist&#39;s names are sorted in ascending order.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

```sql
# Write your MySQL query statement below
SELECT
    artist,
    COUNT(1) AS occurrences
FROM Spotify
GROUP BY artist
ORDER BY occurrences DESC, artist;
```

<!-- tabs:end -->

<!-- end -->
