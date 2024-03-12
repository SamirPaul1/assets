---
title: 4 Keys Keyboard
summary: 4 Keys Keyboard - Solution Explained
url: "/posts/4-keys-keyboard"
date: 2020-10-28T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["4 Keys Keyboard LeetCode Solution Explained in all languages", "651", "leetcode question 651", "4 Keys Keyboard", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/4-keys-keyboard.webp
    alt: 4 Keys Keyboard - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [651. 4 Keys Keyboard](https://leetcode.com/problems/4-keys-keyboard)


## Description

<p>Imagine you have a special keyboard with the following keys:</p>

<ul>
	<li>A: Print one <code>&#39;A&#39;</code> on the screen.</li>
	<li>Ctrl-A: Select the whole screen.</li>
	<li>Ctrl-C: Copy selection to buffer.</li>
	<li>Ctrl-V: Print buffer on screen appending it after what has already been printed.</li>
</ul>

<p>Given an integer n, return <em>the maximum number of </em><code>&#39;A&#39;</code><em> you can print on the screen with <strong>at most</strong> </em><code>n</code><em> presses on the keys</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can at most get 3 A&#39;s on screen by pressing the following key sequence:
A, A, A
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 7
<strong>Output:</strong> 9
<strong>Explanation:</strong> We can at most get 9 A&#39;s on screen by pressing following key sequence:
A, A, A, Ctrl A, Ctrl C, Ctrl V, Ctrl V
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 50</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def maxA(self, n: int) -> int:
        dp = list(range(n + 1))
        for i in range(3, n + 1):
            for j in range(2, i - 1):
                dp[i] = max(dp[i], dp[j - 1] * (i - j))
        return dp[-1]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int maxA(int n) {
        int[] dp = new int[n + 1];
        for (int i = 0; i < n + 1; ++i) {
            dp[i] = i;
        }
        for (int i = 3; i < n + 1; ++i) {
            for (int j = 2; j < i - 1; ++j) {
                dp[i] = Math.max(dp[i], dp[j - 1] * (i - j));
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
    int maxA(int n) {
        vector<int> dp(n + 1);
        iota(dp.begin(), dp.end(), 0);
        for (int i = 3; i < n + 1; ++i) {
            for (int j = 2; j < i - 1; ++j) {
                dp[i] = max(dp[i], dp[j - 1] * (i - j));
            }
        }
        return dp[n];
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func maxA(n int) int {
	dp := make([]int, n+1)
	for i := range dp {
		dp[i] = i
	}
	for i := 3; i < n+1; i++ {
		for j := 2; j < i-1; j++ {
			dp[i] = max(dp[i], dp[j-1]*(i-j))
		}
	}
	return dp[n]
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
