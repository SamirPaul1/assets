---
title: To Be Or Not To Be
summary: To Be Or Not To Be - Solution Explained
url: "/posts/to-be-or-not-to-be"
date: 2020-08-04T08:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["To Be Or Not To Be LeetCode Solution Explained in all languages", "2704", "leetcode question 2704", "To Be Or Not To Be", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/to-be-or-not-to-be.webp
    alt: To Be Or Not To Be - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2704. To Be Or Not To Be](https://leetcode.com/problems/to-be-or-not-to-be)


## Description

<p>Write a function&nbsp;<code>expect</code> that helps developers test their code. It should take in any value&nbsp;<code>val</code>&nbsp;and return an object with the following two functions.</p>

<ul>
	<li><code>toBe(val)</code>&nbsp;accepts another value and returns&nbsp;<code>true</code>&nbsp;if the two values&nbsp;<code>===</code>&nbsp;each other. If they are not equal, it should throw an error&nbsp;<code>&quot;Not Equal&quot;</code>.</li>
	<li><code>notToBe(val)</code>&nbsp;accepts another value and returns&nbsp;<code>true</code>&nbsp;if the two values&nbsp;<code>!==</code>&nbsp;each other. If they are equal, it should throw an error&nbsp;<code>&quot;Equal&quot;</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> func = () =&gt; expect(5).toBe(5)
<strong>Output:</strong> {&quot;value&quot;: true}
<strong>Explanation:</strong> 5 === 5 so this expression returns true.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> func = () =&gt; expect(5).toBe(null)
<strong>Output:</strong> {&quot;error&quot;: &quot;Not Equal&quot;}
<strong>Explanation:</strong> 5 !== null so this expression throw the error &quot;Not Equal&quot;.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> func = () =&gt; expect(5).notToBe(null)
<strong>Output:</strong> {&quot;value&quot;: true}
<strong>Explanation:</strong> 5 !== null so this expression returns true.
</pre>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
    return {
        toBe: (toBeVal: any) => {
            if (val !== toBeVal) {
                throw new Error('Not Equal');
            }
            return true;
        },
        notToBe: (notToBeVal: any) => {
            if (val === notToBeVal) {
                throw new Error('Equal');
            }
            return true;
        },
    };
}

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    return {
        toBe: function (expected) {
            if (val !== expected) {
                throw new Error('Not Equal');
            }
            return true;
        },
        notToBe: function (expected) {
            if (val === expected) {
                throw new Error('Equal');
            }
            return true;
        },
    };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
