---
title: Array Reduce Transformation
summary: Array Reduce Transformation - Solution Explained
url: "/posts/array-reduce-transformation"
date: 2020-08-07T14:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Array Reduce Transformation LeetCode Solution Explained in all languages", "2626", "leetcode question 2626", "Array Reduce Transformation", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/array-reduce-transformation.webp
    alt: Array Reduce Transformation - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2626. Array Reduce Transformation](https://leetcode.com/problems/array-reduce-transformation)


## Description

<p>Given an integer array <code>nums</code>, a reducer function <code>fn</code>, and an initial value <code>init</code>, return the final result obtained by executing the <code>fn</code> function on each element of the array, sequentially, passing in the return value from the calculation on the preceding element.</p>

<p>This result is achieved through the following operations: <code>val = fn(init, nums[0]), val = fn(val, nums[1]), val = fn(val, nums[2]), ...</code> until every element in the array has been processed. The ultimate value of <code>val</code> is then returned.</p>

<p>If the length of the array is 0, the function should return <code>init</code>.</p>

<p>Please solve it without using the built-in <code>Array.reduce</code> method.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
nums = [1,2,3,4]
fn = function sum(accum, curr) { return accum + curr; }
init = 0
<strong>Output:</strong> 10
<strong>Explanation:</strong>
initially, the value is init=0.
(0) + nums[0] = 1
(1) + nums[1] = 3
(3) + nums[2] = 6
(6) + nums[3] = 10
The final answer is 10.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> 
nums = [1,2,3,4]
fn = function sum(accum, curr) { return accum + curr * curr; }
init = 100
<strong>Output:</strong> 130
<strong>Explanation:</strong>
initially, the value is init=100.
(100) + nums[0] * nums[0] = 101
(101) + nums[1] * nums[1] = 105
(105) + nums[2] * nums[2] = 114
(114) + nums[3] * nums[3] = 130
The final answer is 130.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> 
nums = []
fn = function sum(accum, curr) { return 0; }
init = 25
<strong>Output:</strong> 25
<strong>Explanation:</strong> For empty arrays, the answer is always init.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>0 &lt;= init &lt;= 1000</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
type Fn = (accum: number, curr: number) => number;

function reduce(nums: number[], fn: Fn, init: number): number {
    let acc: number = init;
    for (const x of nums) {
        acc = fn(acc, x);
    }
    return acc;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
