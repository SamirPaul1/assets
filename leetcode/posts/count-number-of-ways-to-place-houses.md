---
title: Count Number of Ways to Place Houses
summary: Count Number of Ways to Place Houses - Solution Explained
url: "/posts/count-number-of-ways-to-place-houses"
date: 2020-08-20T08:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Count Number of Ways to Place Houses LeetCode Solution Explained in all languages", "2320", "leetcode question 2320", "Count Number of Ways to Place Houses", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/count-number-of-ways-to-place-houses.webp
    alt: Count Number of Ways to Place Houses - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2320. Count Number of Ways to Place Houses](https://leetcode.com/problems/count-number-of-ways-to-place-houses)


## Description

<p>There is a street with <code>n * 2</code> <strong>plots</strong>, where there are <code>n</code> plots on each side of the street. The plots on each side are numbered from <code>1</code> to <code>n</code>. On each plot, a house can be placed.</p>

<p>Return <em>the number of ways houses can be placed such that no two houses are adjacent to each other on the same side of the street</em>. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>Note that if a house is placed on the <code>i<sup>th</sup></code> plot on one side of the street, a house can also be placed on the <code>i<sup>th</sup></code> plot on the other side of the street.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
Possible arrangements:
1. All plots are empty.
2. A house is placed on one side of the street.
3. A house is placed on the other side of the street.
4. Two houses are placed, one on each side of the street.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/2320.Count%20Number%20of%20Ways%20to%20Place%20Houses/images/arrangements.png" style="width: 500px; height: 500px;" />
<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 9
<strong>Explanation:</strong> The 9 possible arrangements are shown in the diagram above.
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
    def countHousePlacements(self, n: int) -> int:
        mod = 10**9 + 7
        f = [1] * n
        g = [1] * n
        for i in range(1, n):
            f[i] = g[i - 1]
            g[i] = (f[i - 1] + g[i - 1]) % mod
        v = f[-1] + g[-1]
        return v * v % mod
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int countHousePlacements(int n) {
        final int mod = (int) 1e9 + 7;
        int[] f = new int[n];
        int[] g = new int[n];
        f[0] = 1;
        g[0] = 1;
        for (int i = 1; i < n; ++i) {
            f[i] = g[i - 1];
            g[i] = (f[i - 1] + g[i - 1]) % mod;
        }
        long v = (f[n - 1] + g[n - 1]) % mod;
        return (int) (v * v % mod);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int countHousePlacements(int n) {
        const int mod = 1e9 + 7;
        int f[n], g[n];
        f[0] = g[0] = 1;
        for (int i = 1; i < n; ++i) {
            f[i] = g[i - 1];
            g[i] = (f[i - 1] + g[i - 1]) % mod;
        }
        long v = f[n - 1] + g[n - 1];
        return v * v % mod;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func countHousePlacements(n int) int {
	const mod = 1e9 + 7
	f := make([]int, n)
	g := make([]int, n)
	f[0], g[0] = 1, 1
	for i := 1; i < n; i++ {
		f[i] = g[i-1]
		g[i] = (f[i-1] + g[i-1]) % mod
	}
	v := f[n-1] + g[n-1]
	return v * v % mod
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function countHousePlacements(n: number): number {
    const f = new Array(n);
    const g = new Array(n);
    f[0] = g[0] = 1n;
    const mod = BigInt(10 ** 9 + 7);
    for (let i = 1; i < n; ++i) {
        f[i] = g[i - 1];
        g[i] = (f[i - 1] + g[i - 1]) % mod;
    }
    const v = f[n - 1] + g[n - 1];
    return Number(v ** 2n % mod);
}
```
{{< /terminal >}}

{{< terminal title="C# Code" >}}
```cs
public class Solution {
    public int CountHousePlacements(int n) {
        const int mod = (int) 1e9 + 7;
        int[] f = new int[n];
        int[] g = new int[n];
        f[0] = g[0] = 1;
        for (int i = 1; i < n; ++i) {
            f[i] = g[i - 1];
            g[i] = (f[i - 1] + g[i - 1]) % mod;
        }
        long v = (f[n - 1] + g[n - 1]) % mod;
        return (int) (v * v % mod);
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
