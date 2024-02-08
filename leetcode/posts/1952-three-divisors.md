---
title: 1952 Three Divisors
summary: 1952 Three Divisors LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1952 Three Divisors LeetCode Solution Explained in all languages", "1952 Three Divisors", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1952 Three Divisors - Solution Explained/problem-solving.webp
    alt: 1952 Three Divisors
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1952. Three Divisors](https://leetcode.com/problems/three-divisors)


## Description

<p>Given an integer <code>n</code>, return <code>true</code><em> if </em><code>n</code><em> has <strong>exactly three positive divisors</strong>. Otherwise, return </em><code>false</code>.</p>

<p>An integer <code>m</code> is a <strong>divisor</strong> of <code>n</code> if there exists an integer <code>k</code> such that <code>n = k * m</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> false
<strong>Explantion:</strong> 2 has only two divisors: 1 and 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> true
<strong>Explantion:</strong> 4 has three divisors: 1, 2, and 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def isThree(self, n: int) -> bool:
        return sum(n % i == 0 for i in range(2, n)) == 1
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean isThree(int n) {
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                ++cnt;
            }
        }
        return cnt == 1;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool isThree(int n) {
        int cnt = 0;
        for (int i = 2; i < n; ++i) {
            cnt += n % i == 0;
        }
        return cnt == 1;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func isThree(n int) bool {
	cnt := 0
	for i := 2; i < n; i++ {
		if n%i == 0 {
			cnt++
		}
	}
	return cnt == 1
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} n
 * @return {boolean}
 */
var isThree = function (n) {
    let cnt = 0;
    for (let i = 2; i < n; ++i) {
        if (n % i == 0) {
            ++cnt;
        }
    }
    return cnt == 1;
};
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def isThree(self, n: int) -> bool:
        cnt = 0
        i = 1
        while i <= n // i:
            if n % i == 0:
                cnt += 1 if i == n // i else 2
            i += 1
        return cnt == 3
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean isThree(int n) {
        int cnt = 0;
        for (int i = 1; i <= n / i; ++i) {
            if (n % i == 0) {
                cnt += n / i == i ? 1 : 2;
            }
        }
        return cnt == 3;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool isThree(int n) {
        int cnt = 0;
        for (int i = 1; i <= n / i; ++i) {
            if (n % i == 0) {
                cnt += n / i == i ? 1 : 2;
            }
        }
        return cnt == 3;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func isThree(n int) bool {
	cnt := 0
	for i := 1; i <= n/i; i++ {
		if n%i == 0 {
			if n/i == i {
				cnt++
			} else {
				cnt += 2
			}
		}
	}
	return cnt == 3
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} n
 * @return {boolean}
 */
var isThree = function (n) {
    let cnt = 0;
    for (let i = 1; i <= n / i; ++i) {
        if (n % i == 0) {
            cnt += ~~(n / i) == i ? 1 : 2;
        }
    }
    return cnt == 3;
};
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
