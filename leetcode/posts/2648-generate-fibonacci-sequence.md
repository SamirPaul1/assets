---
title: 2648 Generate Fibonacci Sequence
summary: 2648 Generate Fibonacci Sequence LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2648 Generate Fibonacci Sequence LeetCode Solution Explained in all languages", "2648 Generate Fibonacci Sequence", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2648 Generate Fibonacci Sequence - Solution Explained/problem-solving.webp
    alt: 2648 Generate Fibonacci Sequence
    hiddenInList: true
    hiddenInSingle: false
---


# [2648. Generate Fibonacci Sequence](https://leetcode.com/problems/generate-fibonacci-sequence)


## Description

<p>Write a generator function that returns a generator object which yields the&nbsp;<strong>fibonacci sequence</strong>.</p>

<p>The&nbsp;<strong>fibonacci sequence</strong>&nbsp;is defined by the relation <code>X<sub>n</sub>&nbsp;= X<sub>n-1</sub>&nbsp;+ X<sub>n-2</sub></code>.</p>

<p>The first few numbers&nbsp;of the series are <code>0, 1, 1, 2, 3, 5, 8, 13</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> callCount = 5
<strong>Output:</strong> [0,1,1,2,3]
<strong>Explanation:</strong>
const gen = fibGenerator();
gen.next().value; // 0
gen.next().value; // 1
gen.next().value; // 1
gen.next().value; // 2
gen.next().value; // 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> callCount = 0
<strong>Output:</strong> []
<strong>Explanation:</strong> gen.next() is never called so nothing is outputted
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= callCount &lt;= 50</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

```ts
function* fibGenerator(): Generator<number, any, number> {
    let a = 0;
    let b = 1;
    while (true) {
        yield a;
        [a, b] = [b, a + b];
    }
}

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
```

<!-- tabs:end -->

<!-- end -->
