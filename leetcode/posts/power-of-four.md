---
title: Power of Four
summary: Power of Four - Solution Explained
url: "/posts/power-of-four"
date: 2020-11-10T18:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Power of Four LeetCode Solution Explained in all languages", "342", "leetcode question 342", "Power of Four", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/power-of-four.webp
    alt: Power of Four - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [342. Power of Four](https://leetcode.com/problems/power-of-four)


## Description

<p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of four. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of four, if there exists an integer <code>x</code> such that <code>n == 4<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 16
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> false
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without loops/recursion?

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        return n > 0 and (n & (n - 1)) == 0 and (n & 0xAAAAAAAA) == 0
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func isPowerOfFour(n int) bool {
	return n > 0 && (n&(n-1)) == 0 && (n&0xaaaaaaaa) == 0
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function isPowerOfFour(n: number): boolean {
    return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function (n) {
    return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
};
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
