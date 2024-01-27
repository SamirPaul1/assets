---
title: 2796 Repeat String
summary: 2796 Repeat String LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2796 Repeat String LeetCode Solution Explained in all languages", "2796 Repeat String", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2796 Repeat String - Solution Explained/problem-solving.webp
    alt: 2796 Repeat String
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2796. Repeat String](https://leetcode.com/problems/repeat-string)


## Description

<p>Write code that enhances all strings such that you can call the&nbsp;<code>string.replicate(x)</code>&nbsp;method on any string and it will return repeated string <code>x</code> times.</p>

<p>Try to implement it without using the built-in method <code>string.repeat</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> str = &quot;hello&quot;, times = 2
<strong>Output:</strong> &quot;hellohello&quot;
<strong>Explanation:</strong> &quot;hello&quot; is repeated 2 times
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> str = &quot;code&quot;, times = 3
<strong>Output:</strong> &quot;codecodecode&quot;
<strong>Explanation:</strong> &quot;code&quot; is repeated 3 times
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> str = &quot;js&quot;, times = 1
<strong>Output:</strong> &quot;js&quot;
<strong>Explanation:</strong> &quot;js&quot; is repeated 1 time
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= str.length,&nbsp;times &lt;=&nbsp;10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

```ts
declare global {
    interface String {
        replicate(times: number): string;
    }
}

String.prototype.replicate = function (times: number) {
    return new Array(times).fill(this).join('');
};
```

```js
String.prototype.replicate = function (times) {
    return Array(times).fill(this).join('');
};
```

<!-- tabs:end -->

<!-- end -->
