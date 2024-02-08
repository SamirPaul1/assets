---
title: 2480 Form a Chemical Bond
summary: 2480 Form a Chemical Bond LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2480 Form a Chemical Bond LeetCode Solution Explained in all languages", "2480 Form a Chemical Bond", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2480 Form a Chemical Bond - Solution Explained/problem-solving.webp
    alt: 2480 Form a Chemical Bond
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2480. Form a Chemical Bond](https://leetcode.com/problems/form-a-chemical-bond)


## Description

<p>Table: <code>Elements</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| symbol      | varchar |
| type        | enum    |
| electrons   | int     |
+-------------+---------+
symbol is the primary key (column with unique values) for this table.
Each row of this table contains information of one element.
type is an ENUM (category) of type (&#39;Metal&#39;, &#39;Nonmetal&#39;, &#39;Noble&#39;)
 - If type is Noble, electrons is 0.
 - If type is Metal, electrons is the number of electrons that one atom of this element can give.
 - If type is Nonmetal, electrons is the number of electrons that one atom of this element needs.
</pre>

<p>&nbsp;</p>

<p>Two elements can form a bond if one of them is <code>&#39;Metal&#39;</code> and the other is <code>&#39;Nonmetal&#39;</code>.</p>

<p>Write a solution to find all the pairs of elements that can form a bond.</p>

<p>Return the result table <strong>in any order</strong>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Elements table:
+--------+----------+-----------+
| symbol | type     | electrons |
+--------+----------+-----------+
| He     | Noble    | 0         |
| Na     | Metal    | 1         |
| Ca     | Metal    | 2         |
| La     | Metal    | 3         |
| Cl     | Nonmetal | 1         |
| O      | Nonmetal | 2         |
| N      | Nonmetal | 3         |
+--------+----------+-----------+
<strong>Output:</strong> 
+-------+----------+
| metal | nonmetal |
+-------+----------+
| La    | Cl       |
| Ca    | Cl       |
| Na    | Cl       |
| La    | O        |
| Ca    | O        |
| Na    | O        |
| La    | N        |
| Ca    | N        |
| Na    | N        |
+-------+----------+
<strong>Explanation:</strong> 
Metal elements are La, Ca, and Na.
Nonmeal elements are Cl, O, and N.
Each Metal element pairs with a Nonmetal element in the output table.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="SQL Code" >}}
```sql
# Write your MySQL query statement below
SELECT a.symbol AS metal, b.symbol AS nonmetal
FROM
    Elements AS a,
    Elements AS b
WHERE a.type = 'Metal' AND b.type = 'Nonmetal';
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
