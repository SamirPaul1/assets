---
title: Group Sold Products By The Date
summary: Group Sold Products By The Date - Solution Explained
url: "/posts/group-sold-products-by-the-date"
date: 2020-09-24T04:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Group Sold Products By The Date LeetCode Solution Explained in all languages", "1484", "leetcode question 1484", "Group Sold Products By The Date", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/group-sold-products-by-the-date.webp
    alt: Group Sold Products By The Date - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1484. Group Sold Products By The Date](https://leetcode.com/problems/group-sold-products-by-the-date)


## Description

<p>Table <code>Activities</code>:</p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| sell_date   | date    |
| product     | varchar |
+-------------+---------+
There is no primary key (column with unique values) for this table. It may contain duplicates.
Each row of this table contains the product name and the date it was sold in a market.
</pre>

<p>&nbsp;</p>

<p>Write a solution to find for each date the number of different products sold and their names.</p>

<p>The sold products names for each date should be sorted lexicographically.</p>

<p>Return the result table ordered by <code>sell_date</code>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Activities table:
+------------+------------+
| sell_date  | product     |
+------------+------------+
| 2020-05-30 | Headphone  |
| 2020-06-01 | Pencil     |
| 2020-06-02 | Mask       |
| 2020-05-30 | Basketball |
| 2020-06-01 | Bible      |
| 2020-06-02 | Mask       |
| 2020-05-30 | T-Shirt    |
+------------+------------+
<strong>Output:</strong> 
+------------+----------+------------------------------+
| sell_date  | num_sold | products                     |
+------------+----------+------------------------------+
| 2020-05-30 | 3        | Basketball,Headphone,T-shirt |
| 2020-06-01 | 2        | Bible,Pencil                 |
| 2020-06-02 | 1        | Mask                         |
+------------+----------+------------------------------+
<strong>Explanation:</strong> 
For 2020-05-30, Sold items were (Headphone, Basketball, T-shirt), we sort them lexicographically and separate them by a comma.
For 2020-06-01, Sold items were (Pencil, Bible), we sort them lexicographically and separate them by a comma.
For 2020-06-02, the Sold item is (Mask), we just return it.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
SELECT
    sell_date,
    COUNT(DISTINCT product) AS num_sold,
    GROUP_CONCAT(DISTINCT product) AS products
FROM Activities
GROUP BY sell_date
ORDER BY sell_date;
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
