---
title: Add Digits
summary: Add Digits - Solution Explained
url: "/posts/add-digits"
date: 2020-11-14T06:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Add Digits LeetCode Solution Explained in all languages", "258", "leetcode question 258", "Add Digits", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/add-digits.webp
    alt: Add Digits - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [258. Add Digits](https://leetcode.com/problems/add-digits)


## Description

<p>Given an integer <code>num</code>, repeatedly add all its digits until the result has only one digit, and return it.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 38
<strong>Output:</strong> 2
<strong>Explanation:</strong> The process is
38 --&gt; 3 + 8 --&gt; 11
11 --&gt; 1 + 1 --&gt; 2 
Since 2 has only one digit, return it.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 0
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you do it without any loop/recursion in <code>O(1)</code> runtime?</p>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def addDigits(self, num: int) -> int:
        return 0 if num == 0 else (num - 1) % 9 + 1
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func addDigits(num int) int {
	if num == 0 {
		return 0
	}
	return (num-1)%9 + 1
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn add_digits(num: i32) -> i32 {
        if num < 10 {
            return num;
        }
        Self::add_digits(
            num
                .to_string()
                .chars()
                .map(|c| c.to_string().parse::<i32>().unwrap())
                .sum::<i32>()
        )
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn add_digits(mut num: i32) -> i32 {
        ((num - 1) % 9) + 1
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
