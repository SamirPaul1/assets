---
title: Sum of Two Integers
summary: Sum of Two Integers - Solution Explained
url: "/posts/sum-of-two-integers"
date: 2020-11-09T13:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Sum of Two Integers LeetCode Solution Explained in all languages", "371", "leetcode question 371", "Sum of Two Integers", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/sum-of-two-integers.webp
    alt: Sum of Two Integers - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [371. Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers)


## Description

<p>Given two integers <code>a</code> and <code>b</code>, return <em>the sum of the two integers without using the operators</em> <code>+</code> <em>and</em> <code>-</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> a = 1, b = 2
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> a = 2, b = 3
<strong>Output:</strong> 5
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-1000 &lt;= a, b &lt;= 1000</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def getSum(self, a: int, b: int) -> int:
        a, b = a & 0xFFFFFFFF, b & 0xFFFFFFFF
        while b:
            carry = ((a & b) << 1) & 0xFFFFFFFF
            a, b = a ^ b, carry
        return a if a < 0x80000000 else ~(a ^ 0xFFFFFFFF)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int getSum(int a, int b) {
        return b == 0 ? a : getSum(a ^ b, (a & b) << 1);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
            unsigned int carry = (unsigned int) (a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func getSum(a int, b int) int {
	for b != 0 {
		s := a ^ b
		b = (a & b) << 1
		a = s
	}
	return a
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
