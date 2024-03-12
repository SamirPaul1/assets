---
title: Minimum Factorization
summary: Minimum Factorization - Solution Explained
url: "/posts/minimum-factorization"
date: 2020-10-29T23:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Minimum Factorization LeetCode Solution Explained in all languages", "625", "leetcode question 625", "Minimum Factorization", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/minimum-factorization.webp
    alt: Minimum Factorization - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [625. Minimum Factorization](https://leetcode.com/problems/minimum-factorization)


## Description

<p>Given a positive integer num, return <em>the smallest positive integer </em><code>x</code><em> whose multiplication of each digit equals </em><code>num</code>. If there is no answer or the answer is not fit in <strong>32-bit</strong> signed integer, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> num = 48
<strong>Output:</strong> 68
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> num = 15
<strong>Output:</strong> 35
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def smallestFactorization(self, num: int) -> int:
        if num < 2:
            return num
        ans, mul = 0, 1
        for i in range(9, 1, -1):
            while num % i == 0:
                num //= i
                ans = mul * i + ans
                mul *= 10
        return ans if num < 2 and ans <= 2**31 - 1 else 0
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int smallestFactorization(int num) {
        if (num < 2) {
            return num;
        }
        long ans = 0, mul = 1;
        for (int i = 9; i >= 2; --i) {
            if (num % i == 0) {
                while (num % i == 0) {
                    num /= i;
                    ans = mul * i + ans;
                    mul *= 10;
                }
            }
        }
        return num < 2 && ans <= Integer.MAX_VALUE ? (int) ans : 0;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int smallestFactorization(int num) {
        if (num < 2) {
            return num;
        }
        long long ans = 0, mul = 1;
        for (int i = 9; i >= 2; --i) {
            if (num % i == 0) {
                while (num % i == 0) {
                    num /= i;
                    ans = mul * i + ans;
                    mul *= 10;
                }
            }
        }
        return num < 2 && ans <= INT_MAX ? ans : 0;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func smallestFactorization(num int) int {
	if num < 2 {
		return num
	}
	ans, mul := 0, 1
	for i := 9; i >= 2; i-- {
		if num%i == 0 {
			for num%i == 0 {
				num /= i
				ans = mul*i + ans
				mul *= 10
			}
		}
	}
	if num < 2 && ans <= math.MaxInt32 {
		return ans
	}
	return 0
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
