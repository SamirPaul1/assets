---
title: Consecutive Numbers Sum
summary: Consecutive Numbers Sum - Solution Explained
url: "/posts/consecutive-numbers-sum"
date: 2020-10-21T11:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Consecutive Numbers Sum LeetCode Solution Explained in all languages", "829", "leetcode question 829", "Consecutive Numbers Sum", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/consecutive-numbers-sum.webp
    alt: Consecutive Numbers Sum - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [829. Consecutive Numbers Sum](https://leetcode.com/problems/consecutive-numbers-sum)


## Description

<p>Given an integer <code>n</code>, return <em>the number of ways you can write </em><code>n</code><em> as the sum of consecutive positive integers.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> 5 = 2 + 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 9
<strong>Output:</strong> 3
<strong>Explanation:</strong> 9 = 4 + 5 = 2 + 3 + 4
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 15
<strong>Output:</strong> 4
<strong>Explanation:</strong> 15 = 8 + 7 = 4 + 5 + 6 = 1 + 2 + 3 + 4 + 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def consecutiveNumbersSum(self, n: int) -> int:
        n <<= 1
        ans, k = 0, 1
        while k * (k + 1) <= n:
            if n % k == 0 and (n // k + 1 - k) % 2 == 0:
                ans += 1
            k += 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {

    public int consecutiveNumbersSum(int n) {
        n <<= 1;
        int ans = 0;
        for (int k = 1; k * (k + 1) <= n; ++k) {
            if (n % k == 0 && (n / k + 1 - k) % 2 == 0) {
                ++ans;
            }
        }
        return ans;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        n <<= 1;
        int ans = 0;
        for (int k = 1; k * (k + 1) <= n; ++k) {
            if (n % k == 0 && (n / k + 1 - k) % 2 == 0) {
                ++ans;
            }
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func consecutiveNumbersSum(n int) int {
	n <<= 1
	ans := 0
	for k := 1; k*(k+1) <= n; k++ {
		if n%k == 0 && (n/k+1-k)%2 == 0 {
			ans++
		}
	}
	return ans
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
