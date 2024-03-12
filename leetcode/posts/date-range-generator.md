---
title: Date Range Generator
summary: Date Range Generator - Solution Explained
url: "/posts/date-range-generator"
date: 2020-08-01T07:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Date Range Generator LeetCode Solution Explained in all languages", "2777", "leetcode question 2777", "Date Range Generator", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/date-range-generator.webp
    alt: Date Range Generator - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2777. Date Range Generator](https://leetcode.com/problems/date-range-generator)


## Description

<p>Given a start date <code>start</code>, an end date <code>end</code>, and a positive integer&nbsp;<code>step</code>, return a generator object that yields&nbsp;dates in the range from <code>start</code> to <code>end</code>&nbsp;inclusive. All dates&nbsp;are in the string format&nbsp;<code>YYYY-MM-DD</code>. The value of&nbsp;<code>step</code>&nbsp;indicates the number of days between consecutive yielded values.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> start = &quot;2023-04-01&quot;, end = &quot;2023-04-04&quot;, step = 1
<strong>Output:</strong> [&quot;2023-04-01&quot;,&quot;2023-04-02&quot;,&quot;2023-04-03&quot;,&quot;2023-04-04&quot;]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // &#39;2023-04-01&#39;
g.next().value // &#39;2023-04-02&#39;
g.next().value // &#39;2023-04-03&#39;
g.next().value // &#39;2023-04-04&#39;</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> start = &quot;2023-04-10&quot;, end = &quot;2023-04-20&quot;, step = 3
<strong>Output:</strong> [&quot;2023-04-10&quot;,&quot;2023-04-13&quot;,&quot;2023-04-16&quot;,&quot;2023-04-19&quot;]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // &#39;2023-04-10&#39;
g.next().value // &#39;2023-04-13&#39;
g.next().value // &#39;2023-04-16&#39;
g.next().value // &#39;2023-04-19&#39;</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> start = &quot;2023-04-10&quot;, end = &quot;2023-04-10&quot;, step = 1
<strong>Output:</strong> [&quot;2023-04-10&quot;]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // &#39;2023-04-10&#39;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>new Date(start) &lt;= new Date(end)</code></li>
	<li><code>0 &lt;= The difference in days between the start date and the end date &lt;= 1000</code></li>
	<li><code>1 &lt;= step &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function* dateRangeGenerator(start: string, end: string, step: number): Generator<string> {
    const startDate = new Date(start);
    const endDate = new Date(end);
    let currentDate = startDate;
    while (currentDate <= endDate) {
        yield currentDate.toISOString().slice(0, 10);
        currentDate.setDate(currentDate.getDate() + step);
    }
}

/**
 * const g = dateRangeGenerator('2023-04-01', '2023-04-04', 1);
 * g.next().value; // '2023-04-01'
 * g.next().value; // '2023-04-02'
 * g.next().value; // '2023-04-03'
 * g.next().value; // '2023-04-04'
 * g.next().done; // true
 */
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
