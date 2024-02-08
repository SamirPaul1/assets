---
title: 2821 Delay the Resolution of Each Promise
summary: 2821 Delay the Resolution of Each Promise LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2821 Delay the Resolution of Each Promise LeetCode Solution Explained in all languages", "2821 Delay the Resolution of Each Promise", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2821 Delay the Resolution of Each Promise - Solution Explained/problem-solving.webp
    alt: 2821 Delay the Resolution of Each Promise
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2821. Delay the Resolution of Each Promise](https://leetcode.com/problems/delay-the-resolution-of-each-promise)


## Description

<p>Given an array&nbsp;<code>functions</code>&nbsp;and a number <code>ms</code>, return a new&nbsp;array of functions.</p>

<ul>
	<li><code>functions</code>&nbsp;is an array of functions that return promises.</li>
	<li><code>ms</code>&nbsp;represents the delay duration in milliseconds. It determines the amount of time to wait before resolving each promise in the new array.</li>
</ul>

<p>Each function in the new array should return a promise that resolves after a delay of <code>ms</code>&nbsp;milliseconds, preserving the order of the original <code>functions</code>&nbsp;array. The <code>delayAll</code> function should ensure&nbsp;that each promise from <code>functions</code> is executed with a delay, forming the new array of functions returning delayed promises.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
functions = [
&nbsp;  () =&gt; new Promise((resolve) =&gt; setTimeout(resolve, 30))
], 
ms = 50
<strong>Output:</strong> [80]
<strong>Explanation:</strong> The promise from the array would have resolved after 30 ms, but it was delayed by 50 ms, thus 30 ms + 50 ms = 80 ms.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> 
functions = [
&nbsp;   () =&gt; new Promise((resolve) =&gt; setTimeout(resolve, 50)),
&nbsp;   () =&gt; new Promise((resolve) =&gt; setTimeout(resolve, 80))
], 
ms = 70
<strong>Output:</strong> [120,150]
<strong>Explanation:</strong> The promises from the array would have resolved after 50 ms and 80 ms, but they were delayed by 70 ms, thus 50 ms + 70 ms = 120 ms and 80 ms + 70 ms = 150 ms.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>functions</code> is an array of functions that return promises</li>
	<li><code>10 &lt;= ms &lt;= 500</code></li>
	<li><code>1 &lt;= functions.length &lt;= 10</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function delayAll(functions: Function[], ms: number): Function[] {
    return functions.map(fn => {
        return async function () {
            await new Promise(resolve => setTimeout(resolve, ms));
            return fn();
        };
    });
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
