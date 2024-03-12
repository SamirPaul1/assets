---
title: Integer Break
summary: Integer Break - Solution Explained
url: "/posts/integer-break"
date: 2020-11-10T17:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Integer Break LeetCode Solution Explained in all languages", "343", "leetcode question 343", "Integer Break", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/integer-break.webp
    alt: Integer Break - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [343. Integer Break](https://leetcode.com/problems/integer-break)


## Description

<p>Given an integer <code>n</code>, break it into the sum of <code>k</code> <strong>positive integers</strong>, where <code>k &gt;= 2</code>, and maximize the product of those integers.</p>

<p>Return <em>the maximum product you can get</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> 2 = 1 + 1, 1 &times; 1 = 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 36
<strong>Explanation:</strong> 10 = 3 + 3 + 4, 3 &times; 3 &times; 4 = 36.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= n &lt;= 58</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def integerBreak(self, n: int) -> int:
        dp = [1] * (n + 1)
        for i in range(2, n + 1):
            for j in range(1, i):
                dp[i] = max(dp[i], dp[i - j] * j, (i - j) * j)
        return dp[n]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int integerBreak(int n) {
        int[] dp = new int[n + 1];
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                dp[i] = Math.max(Math.max(dp[i], dp[i - j] * j), (i - j) * j);
            }
        }
        return dp[n];
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1);
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                dp[i] = max(max(dp[i], dp[i - j] * j), (i - j) * j);
            }
        }
        return dp[n];
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func integerBreak(n int) int {
	dp := make([]int, n+1)
	dp[1] = 1
	for i := 2; i <= n; i++ {
		for j := 1; j < i; j++ {
			dp[i] = max(max(dp[i], dp[i-j]*j), (i-j)*j)
		}
	}
	return dp[n]
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function integerBreak(n: number): number {
    let dp = new Array(n + 1).fill(1);
    for (let i = 3; i <= n; i++) {
        for (let j = 1; j < i; j++) {
            dp[i] = Math.max(dp[i], j * (i - j), j * dp[i - j]);
        }
    }
    return dp.pop();
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn integer_break(n: i32) -> i32 {
        if n < 4 {
            return n - 1;
        }
        let count = (n - 2) / 3;
        (3i32).pow(count as u32) * (n - count * 3)
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int integerBreak(int n) {
    if (n < 4) {
        return n - 1;
    }
    int count = (n - 2) / 3;
    return pow(3, count) * (n - count * 3);
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def integerBreak(self, n: int) -> int:
        if n < 4:
            return n - 1
        if n % 3 == 0:
            return pow(3, n // 3)
        if n % 3 == 1:
            return pow(3, n // 3 - 1) * 4
        return pow(3, n // 3) * 2
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int integerBreak(int n) {
        if (n < 4) {
            return n - 1;
        }
        if (n % 3 == 0) {
            return (int) Math.pow(3, n / 3);
        }
        if (n % 3 == 1) {
            return (int) Math.pow(3, n / 3 - 1) * 4;
        }
        return (int) Math.pow(3, n / 3) * 2;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int integerBreak(int n) {
        if (n < 4) {
            return n - 1;
        }
        if (n % 3 == 0) {
            return pow(3, n / 3);
        }
        if (n % 3 == 1) {
            return pow(3, n / 3 - 1) * 4;
        }
        return pow(3, n / 3) * 2;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func integerBreak(n int) int {
	if n < 4 {
		return n - 1
	}
	if n%3 == 0 {
		return int(math.Pow(3, float64(n/3)))
	}
	if n%3 == 1 {
		return int(math.Pow(3, float64(n/3-1))) * 4
	}
	return int(math.Pow(3, float64(n/3))) * 2
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function integerBreak(n: number): number {
    if (n < 4) {
        return n - 1;
    }
    const m = Math.floor(n / 3);
    if (n % 3 == 0) {
        return 3 ** m;
    }
    if (n % 3 == 1) {
        return 3 ** (m - 1) * 4;
    }
    return 3 ** m * 2;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
