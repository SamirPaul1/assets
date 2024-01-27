---
title: 2775 Undefined to Null
summary: 2775 Undefined to Null LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2775 Undefined to Null LeetCode Solution Explained in all languages", "2775 Undefined to Null", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2775 Undefined to Null - Solution Explained/problem-solving.webp
    alt: 2775 Undefined to Null
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2775. Undefined to Null](https://leetcode.com/problems/undefined-to-null)


## Description

<p>Write a function called <code>undefinedToNull</code> that takes a&nbsp;deeply nested object or array&nbsp;<code>obj</code>, and then creates a copy of that object with any <code>undefined</code> values replaced by <code>null</code>.</p>

<p><code>undefined</code> values are handled differently than <code>null</code> values when objects are converted to a JSON string using <code>JSON.stringify()</code>. This function helps ensure serialized data is free of unexpected errors.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> obj = {&quot;a&quot;: undefined, &quot;b&quot;: 3}
<strong>Output:</strong> {&quot;a&quot;: null, &quot;b&quot;: 3}
<strong>Explanation:</strong> The value for obj.a has been changed from undefined to null
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> obj = {&quot;a&quot;: undefined, &quot;b&quot;: [&quot;a&quot;, undefined]}
<strong>Output:</strong> {&quot;a&quot;: null,&quot;b&quot;: [&quot;a&quot;, null]}
<strong>Explanation:</strong> The values for obj.a and obj.b[1] have been changed from undefined to null
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>obj</code> is a valid JSON object or array</li>
	<li><code>2 &lt;= JSON.stringify(obj).length &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

```ts
function undefinedToNull(obj: Record<any, any>): Record<any, any> {
    for (const key in obj) {
        if (typeof obj[key] === 'object') {
            obj[key] = undefinedToNull(obj[key]);
        }
        if (obj[key] === undefined) {
            obj[key] = null;
        }
    }
    return obj;
}

/**
 * undefinedToNull({"a": undefined, "b": 3}) // {"a": null, "b": 3}
 * undefinedToNull([undefined, undefined]) // [null, null]
 */
```

<!-- tabs:end -->

<!-- end -->
