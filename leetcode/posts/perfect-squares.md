---
title: Perfect Squares
summary: Perfect Squares - Solution Explained
url: "/posts/perfect-squares"
date: 2020-11-13T09:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Perfect Squares LeetCode Solution Explained in all languages", "279", "leetcode question 279", "Perfect Squares", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/perfect-squares.webp
    alt: Perfect Squares - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [279. Perfect Squares](https://leetcode.com/problems/perfect-squares)


## Description

<p>Given an integer <code>n</code>, return <em>the least number of perfect square numbers that sum to</em> <code>n</code>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, <code>1</code>, <code>4</code>, <code>9</code>, and <code>16</code> are perfect squares while <code>3</code> and <code>11</code> are not.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 12
<strong>Output:</strong> 3
<strong>Explanation:</strong> 12 = 4 + 4 + 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 13
<strong>Output:</strong> 2
<strong>Explanation:</strong> 13 = 4 + 9.
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
    def numSquares(self, n: int) -> int:
        m = int(sqrt(n))
        f = [[inf] * (n + 1) for _ in range(m + 1)]
        f[0][0] = 0
        for i in range(1, m + 1):
            for j in range(n + 1):
                f[i][j] = f[i - 1][j]
                if j >= i * i:
                    f[i][j] = min(f[i][j], f[i][j - i * i] + 1)
        return f[m][n]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numSquares(int n) {
        int m = (int) Math.sqrt(n);
        int[][] f = new int[m + 1][n + 1];
        for (var g : f) {
            Arrays.fill(g, 1 << 30);
        }
        f[0][0] = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                f[i][j] = f[i - 1][j];
                if (j >= i * i) {
                    f[i][j] = Math.min(f[i][j], f[i][j - i * i] + 1);
                }
            }
        }
        return f[m][n];
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int numSquares(int n) {
        int m = sqrt(n);
        int f[m + 1][n + 1];
        memset(f, 0x3f, sizeof(f));
        f[0][0] = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                f[i][j] = f[i - 1][j];
                if (j >= i * i) {
                    f[i][j] = min(f[i][j], f[i][j - i * i] + 1);
                }
            }
        }
        return f[m][n];
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numSquares(n int) int {
	m := int(math.Sqrt(float64(n)))
	f := make([][]int, m+1)
	const inf = 1 << 30
	for i := range f {
		f[i] = make([]int, n+1)
		for j := range f[i] {
			f[i][j] = inf
		}
	}
	f[0][0] = 0
	for i := 1; i <= m; i++ {
		for j := 0; j <= n; j++ {
			f[i][j] = f[i-1][j]
			if j >= i*i {
				f[i][j] = min(f[i][j], f[i][j-i*i]+1)
			}
		}
	}
	return f[m][n]
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numSquares(n: number): number {
    const m = Math.floor(Math.sqrt(n));
    const f: number[][] = Array(m + 1)
        .fill(0)
        .map(() => Array(n + 1).fill(1 << 30));
    f[0][0] = 0;
    for (let i = 1; i <= m; ++i) {
        for (let j = 0; j <= n; ++j) {
            f[i][j] = f[i - 1][j];
            if (j >= i * i) {
                f[i][j] = Math.min(f[i][j], f[i][j - i * i] + 1);
            }
        }
    }
    return f[m][n];
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn num_squares(n: i32) -> i32 {
        let (row, col) = ((n as f32).sqrt().floor() as usize, n as usize);
        let mut dp = vec![vec![i32::MAX; col + 1]; row + 1];
        dp[0][0] = 0;
        for i in 1..=row {
            for j in 0..=col {
                dp[i][j] = dp[i - 1][j];
                if j >= i * i {
                    dp[i][j] = std::cmp::min(dp[i][j], dp[i][j - i * i] + 1);
                }
            }
        }
        dp[row][col]
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def numSquares(self, n: int) -> int:
        m = int(sqrt(n))
        f = [0] + [inf] * n
        for i in range(1, m + 1):
            for j in range(i * i, n + 1):
                f[j] = min(f[j], f[j - i * i] + 1)
        return f[n]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numSquares(int n) {
        int m = (int) Math.sqrt(n);
        int[] f = new int[n + 1];
        Arrays.fill(f, 1 << 30);
        f[0] = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = i * i; j <= n; ++j) {
                f[j] = Math.min(f[j], f[j - i * i] + 1);
            }
        }
        return f[n];
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int numSquares(int n) {
        int m = sqrt(n);
        int f[n + 1];
        memset(f, 0x3f, sizeof(f));
        f[0] = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = i * i; j <= n; ++j) {
                f[j] = min(f[j], f[j - i * i] + 1);
            }
        }
        return f[n];
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numSquares(n int) int {
	m := int(math.Sqrt(float64(n)))
	f := make([]int, n+1)
	for i := range f {
		f[i] = 1 << 30
	}
	f[0] = 0
	for i := 1; i <= m; i++ {
		for j := i * i; j <= n; j++ {
			f[j] = min(f[j], f[j-i*i]+1)
		}
	}
	return f[n]
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numSquares(n: number): number {
    const m = Math.floor(Math.sqrt(n));
    const f: number[] = Array(n + 1).fill(1 << 30);
    f[0] = 0;
    for (let i = 1; i <= m; ++i) {
        for (let j = i * i; j <= n; ++j) {
            f[j] = Math.min(f[j], f[j - i * i] + 1);
        }
    }
    return f[n];
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn num_squares(n: i32) -> i32 {
        let (row, col) = ((n as f32).sqrt().floor() as usize, n as usize);
        let mut dp = vec![i32::MAX; col + 1];
        dp[0] = 0;
        for i in 1..=row {
            for j in i * i..=col {
                dp[j] = std::cmp::min(dp[j], dp[j - i * i] + 1);
            }
        }
        dp[col]
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
