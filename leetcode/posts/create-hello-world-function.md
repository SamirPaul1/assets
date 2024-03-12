---
title: Create Hello World Function
summary: Create Hello World Function - Solution Explained
url: "/posts/create-hello-world-function"
date: 2020-08-05T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Create Hello World Function LeetCode Solution Explained in all languages", "2667", "leetcode question 2667", "Create Hello World Function", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/create-hello-world-function.webp
    alt: Create Hello World Function - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2667. Create Hello World Function](https://leetcode.com/problems/create-hello-world-function)


## Description

Write a function&nbsp;<code>createHelloWorld</code>.&nbsp;It should return a new function that always returns&nbsp;<code>&quot;Hello World&quot;</code>.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> args = []
<strong>Output:</strong> &quot;Hello World&quot;
<strong>Explanation:</strong>
const f = createHelloWorld();
f(); // &quot;Hello World&quot;

The function returned by createHelloWorld should always return &quot;Hello World&quot;.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> args = [{},null,42]
<strong>Output:</strong> &quot;Hello World&quot;
<strong>Explanation:</strong>
const f = createHelloWorld();
f({}, null, 42); // &quot;Hello World&quot;

Any arguments could be passed to the function but it should still always return &quot;Hello World&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= args.length &lt;= 10</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function createHelloWorld() {
    return function (...args): string {
        return 'Hello World';
    };
}

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
