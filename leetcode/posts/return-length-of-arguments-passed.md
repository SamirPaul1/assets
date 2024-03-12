---
title: Return Length of Arguments Passed
summary: Return Length of Arguments Passed - Solution Explained
url: "/posts/return-length-of-arguments-passed"
date: 2020-08-04T09:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Return Length of Arguments Passed LeetCode Solution Explained in all languages", "2703", "leetcode question 2703", "Return Length of Arguments Passed", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/return-length-of-arguments-passed.webp
    alt: Return Length of Arguments Passed - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2703. Return Length of Arguments Passed](https://leetcode.com/problems/return-length-of-arguments-passed)


## Description

Write a function&nbsp;<code>argumentsLength</code> that returns the count of arguments passed to it.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> args = [5]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
argumentsLength(5); // 1

One value was passed to the function so it should return 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> args = [{}, null, &quot;3&quot;]
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
argumentsLength({}, null, &quot;3&quot;); // 3

Three values were passed to the function so it should return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>args</code>&nbsp;is a valid JSON array</li>
	<li><code>0 &lt;= args.length &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function argumentsLength(...args: any[]): number {
    return args.length;
}

/**
 * argumentsLength(1, 2, 3); // 3
 */
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
