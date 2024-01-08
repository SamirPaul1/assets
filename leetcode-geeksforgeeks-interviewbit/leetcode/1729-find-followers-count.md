---
title: 1729 Find Followers Count
summary: 1729 Find Followers Count LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/1729-find-followers-count", "/blog/posts/1729-find-followers-count", "/1729-find-followers-count"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 1729-find-followers-count solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:1729 Find Followers Count/problem-solving.webp
    alt: 1729 Find Followers Count
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/find-followers-count/">1729. Find Followers Count</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Followers</code></p>

<pre>+-------------+------+
| Column Name | Type |
+-------------+------+
| user_id     | int  |
| follower_id | int  |
+-------------+------+
(user_id, follower_id) is the primary key for this table.
This table contains the IDs of a user and a follower in a social media app where the follower follows the user.</pre>

<p>&nbsp;</p>

<p>Write an SQL query that will, for each user, return the number of followers.</p>

<p>Return the result table ordered by <code>user_id</code> in ascending order.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> 
Followers table:
+---------+-------------+
| user_id | follower_id |
+---------+-------------+
| 0       | 1           |
| 1       | 0           |
| 2       | 0           |
| 2       | 1           |
+---------+-------------+
<strong>Output:</strong> 
+---------+----------------+
| user_id | followers_count|
+---------+----------------+
| 0       | 1              |
| 1       | 1              |
| 2       | 2              |
+---------+----------------+
<strong>Explanation:</strong> 
The followers of 0 are {1}
The followers of 1 are {0}
The followers of 2 are {0,1}
</pre>
</div>

---




```sql
# Write your MySQL query statement below
select user_id, count(*) as followers_count from followers group by user_id order by user_id asc;  
```
