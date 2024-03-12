---
title: Hamming Distance
summary: Hamming Distance - Solution Explained
url: "/posts/hamming-distance"
date: 2020-11-05T19:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Hamming Distance LeetCode Solution Explained in all languages", "461", "leetcode question 461", "Hamming Distance", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/hamming-distance.webp
    alt: Hamming Distance - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [461. Hamming Distance](https://leetcode.com/problems/hamming-distance)


## Description

<p>The <a href="https://en.wikipedia.org/wiki/Hamming_distance" target="_blank">Hamming distance</a> between two integers is the number of positions at which the corresponding bits are different.</p>

<p>Given two integers <code>x</code> and <code>y</code>, return <em>the <strong>Hamming distance</strong> between them</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 1, y = 4
<strong>Output:</strong> 2
<strong>Explanation:</strong>
1   (0 0 0 1)
4   (0 1 0 0)
       &uarr;   &uarr;
The above arrows point to positions where the corresponding bits are different.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = 3, y = 1
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;=&nbsp;x, y &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        return (x ^ y).bit_count()
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int hammingDistance(int x, int y) {
        return Integer.bitCount(x ^ y);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func hammingDistance(x int, y int) int {
	return bits.OnesCount(uint(x ^ y))
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function hammingDistance(x: number, y: number): number {
    x ^= y;
    let ans = 0;
    while (x) {
        x -= x & -x;
        ++ans;
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function (x, y) {
    x ^= y;
    let ans = 0;
    while (x) {
        x -= x & -x;
        ++ans;
    }
    return ans;
};
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
