---
title: 1062 Longest Repeating Substring
summary: 1062 Longest Repeating Substring LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1062 Longest Repeating Substring LeetCode Solution Explained in all languages", "1062 Longest Repeating Substring", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1062 Longest Repeating Substring - Solution Explained/problem-solving.webp
    alt: 1062 Longest Repeating Substring
    hiddenInList: true
    hiddenInSingle: false
---


# [1062. Longest Repeating Substring](https://leetcode.com/problems/longest-repeating-substring)


## Description

<p>Given a string <code>s</code>, return <em>the length of the longest repeating substrings</em>. If no repeating substring exists, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcd&quot;
<strong>Output:</strong> 0
<strong>Explanation: </strong>There is no repeating substring.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abbaba&quot;
<strong>Output:</strong> 2
<strong>Explanation: </strong>The longest repeating substrings are &quot;ab&quot; and &quot;ba&quot;, each of which occurs twice.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aabcaabdaab&quot;
<strong>Output:</strong> 3
<strong>Explanation: </strong>The longest repeating substring is &quot;aab&quot;, which occurs <code>3</code> times.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

```python
class Solution:
    def longestRepeatingSubstring(self, s: str) -> int:
        n = len(s)
        dp = [[0] * n for _ in range(n)]
        ans = 0
        for i in range(n):
            for j in range(i + 1, n):
                if s[i] == s[j]:
                    dp[i][j] = dp[i - 1][j - 1] + 1 if i else 1
                    ans = max(ans, dp[i][j])
        return ans
```

```java
class Solution {
    public int longestRepeatingSubstring(String s) {
        int n = s.length();
        int ans = 0;
        int[][] dp = new int[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (s.charAt(i) == s.charAt(j)) {
                    dp[i][j] = i > 0 ? dp[i - 1][j - 1] + 1 : 1;
                    ans = Math.max(ans, dp[i][j]);
                }
            }
        }
        return ans;
    }
}
```

```cpp
class Solution {
public:
    int longestRepeatingSubstring(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (s[i] == s[j]) {
                    dp[i][j] = i ? dp[i - 1][j - 1] + 1 : 1;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans;
    }
};
```

```go
func longestRepeatingSubstring(s string) int {
	n := len(s)
	dp := make([][]int, n)
	for i := range dp {
		dp[i] = make([]int, n)
	}
	ans := 0
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if s[i] == s[j] {
				if i == 0 {
					dp[i][j] = 1
				} else {
					dp[i][j] = dp[i-1][j-1] + 1
				}
				ans = max(ans, dp[i][j])
			}
		}
	}
	return ans
}
```

<!-- tabs:end -->

<!-- end -->
