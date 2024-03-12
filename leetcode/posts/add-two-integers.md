---
title: Add Two Integers
summary: Add Two Integers - Solution Explained
url: "/posts/add-two-integers"
date: 2020-08-23T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Add Two Integers LeetCode Solution Explained in all languages", "2235", "leetcode question 2235", "Add Two Integers", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/add-two-integers.webp
    alt: Add Two Integers - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2235. Add Two Integers](https://leetcode.com/problems/add-two-integers)


## Description

Given two integers <code>num1</code> and <code>num2</code>, return <em>the <strong>sum</strong> of the two integers</em>.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num1 = 12, num2 = 5
<strong>Output:</strong> 17
<strong>Explanation:</strong> num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num1 = -10, num2 = 4
<strong>Output:</strong> -6
<strong>Explanation:</strong> num1 + num2 = -6, so -6 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-100 &lt;= num1, num2 &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sum(self, num1: int, num2: int) -> int:
        return num1 + num2
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int sum(int num1, int num2) {
        return num1 + num2;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func sum(num1 int, num2 int) int {
	return num1 + num2
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function sum(num1: number, num2: number): number {
    return num1 + num2;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn sum(num1: i32, num2: i32) -> i32 {
        num1 + num2
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int sum(int num1, int num2) {
    return num1 + num2;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sum(self, num1: int, num2: int) -> int:
        num1, num2 = num1 & 0xFFFFFFFF, num2 & 0xFFFFFFFF
        while num2:
            carry = ((num1 & num2) << 1) & 0xFFFFFFFF
            num1, num2 = num1 ^ num2, carry
        return num1 if num1 < 0x80000000 else ~(num1 ^ 0xFFFFFFFF)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int sum(int num1, int num2) {
        while (num2 != 0) {
            int carry = (num1 & num2) << 1;
            num1 ^= num2;
            num2 = carry;
        }
        return num1;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int sum(int num1, int num2) {
        while (num2) {
            unsigned int carry = (unsigned int) (num1 & num2) << 1;
            num1 ^= num2;
            num2 = carry;
        }
        return num1;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func sum(num1 int, num2 int) int {
	for num2 != 0 {
		carry := (num1 & num2) << 1
		num1 ^= num2
		num2 = carry
	}
	return num1
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function sum(num1: number, num2: number): number {
    while (num2) {
        const carry = (num1 & num2) << 1;
        num1 ^= num2;
        num2 = carry;
    }
    return num1;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn sum(num1: i32, num2: i32) -> i32 {
        let mut num1 = num1;
        let mut num2 = num2;
        while num2 != 0 {
            let carry = (num1 & num2) << 1;
            num1 ^= num2;
            num2 = carry;
        }
        num1
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
