---
title: 1780 Check if Number is a Sum of Powers of Three
summary: 1780 Check if Number is a Sum of Powers of Three LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1780 Check if Number is a Sum of Powers of Three LeetCode Solution Explained in all languages", "1780 Check if Number is a Sum of Powers of Three", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1780 Check if Number is a Sum of Powers of Three - Solution Explained/problem-solving.webp
    alt: 1780 Check if Number is a Sum of Powers of Three
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1780. Check if Number is a Sum of Powers of Three](https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three)


## Description

<p>Given an integer <code>n</code>, return <code>true</code> <em>if it is possible to represent </em><code>n</code><em> as the sum of distinct powers of three.</em> Otherwise, return <code>false</code>.</p>

<p>An integer <code>y</code> is a power of three if there exists an integer <code>x</code> such that <code>y == 3<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 12
<strong>Output:</strong> true
<strong>Explanation:</strong> 12 = 3<sup>1</sup> + 3<sup>2</sup>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 91
<strong>Output:</strong> true
<strong>Explanation:</strong> 91 = 3<sup>0</sup> + 3<sup>2</sup> + 3<sup>4</sup>
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 21
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>7</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        while n:
            if n % 3 > 1:
                return False
            n //= 3
        return True
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 > 1) {
                return false;
            }
            n /= 3;
        }
        return true;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n) {
            if (n % 3 > 1) return false;
            n /= 3;
        }
        return true;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func checkPowersOfThree(n int) bool {
	for n > 0 {
		if n%3 > 1 {
			return false
		}
		n /= 3
	}
	return true
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function checkPowersOfThree(n: number): boolean {
    while (n) {
        if (n % 3 > 1) return false;
        n = Math.floor(n / 3);
    }
    return true;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
