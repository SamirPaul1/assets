---
title: Smallest Integer Divisible by K
summary: Smallest Integer Divisible by K - Solution Explained
url: "/posts/smallest-integer-divisible-by-k"
date: 2020-10-13T17:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Smallest Integer Divisible by K LeetCode Solution Explained in all languages", "1015", "leetcode question 1015", "Smallest Integer Divisible by K", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/smallest-integer-divisible-by-k.webp
    alt: Smallest Integer Divisible by K - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1015. Smallest Integer Divisible by K](https://leetcode.com/problems/smallest-integer-divisible-by-k)


## Description

<p>Given a positive integer <code>k</code>, you need to find the <strong>length</strong> of the <strong>smallest</strong> positive integer <code>n</code> such that <code>n</code> is divisible by <code>k</code>, and <code>n</code> only contains the digit <code>1</code>.</p>

<p>Return <em>the <strong>length</strong> of </em><code>n</code>. If there is no such <code>n</code>, return -1.</p>

<p><strong>Note:</strong> <code>n</code> may not fit in a 64-bit signed integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> k = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> The smallest answer is n = 1, which has length 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> k = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is no such positive integer n divisible by 2.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> The smallest answer is n = 111, which has length 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def smallestRepunitDivByK(self, k: int) -> int:
        n = 1 % k
        for i in range(1, k + 1):
            if n == 0:
                return i
            n = (n * 10 + 1) % k
        return -1
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int smallestRepunitDivByK(int k) {
        int n = 1 % k;
        for (int i = 1; i <= k; ++i) {
            if (n == 0) {
                return i;
            }
            n = (n * 10 + 1) % k;
        }
        return -1;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n = 1 % k;
        for (int i = 1; i <= k; ++i) {
            if (n == 0) {
                return i;
            }
            n = (n * 10 + 1) % k;
        }
        return -1;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func smallestRepunitDivByK(k int) int {
	n := 1 % k
	for i := 1; i <= k; i++ {
		if n == 0 {
			return i
		}
		n = (n*10 + 1) % k
	}
	return -1
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function smallestRepunitDivByK(k: number): number {
    let n = 1 % k;
    for (let i = 1; i <= k; ++i) {
        if (n === 0) {
            return i;
        }
        n = (n * 10 + 1) % k;
    }
    return -1;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
