---
title: 2520 Count the Digits That Divide a Number
summary: 2520 Count the Digits That Divide a Number LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2520 Count the Digits That Divide a Number LeetCode Solution Explained in all languages", "2520 Count the Digits That Divide a Number", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2520 Count the Digits That Divide a Number - Solution Explained/problem-solving.webp
    alt: 2520 Count the Digits That Divide a Number
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2520. Count the Digits That Divide a Number](https://leetcode.com/problems/count-the-digits-that-divide-a-number)


## Description

<p>Given an integer <code>num</code>, return <em>the number of digits in <code>num</code> that divide </em><code>num</code>.</p>

<p>An integer <code>val</code> divides <code>nums</code> if <code>nums % val == 0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 7
<strong>Output:</strong> 1
<strong>Explanation:</strong> 7 divides itself, hence the answer is 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 121
<strong>Output:</strong> 2
<strong>Explanation:</strong> 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 1248
<strong>Output:</strong> 4
<strong>Explanation:</strong> 1248 is divisible by all of its digits, hence the answer is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 10<sup>9</sup></code></li>
	<li><code>num</code> does not contain <code>0</code> as one of its digits.</li>
</ul>

## Solutions

### Solution 1: Enumeration

We directly enumerate each digit $val$ of the integer $num$, and if $val$ can divide $num$, we add one to the answer.

After the enumeration, we return the answer.

The time complexity is $O(\log num)$, and the space complexity is $O(1)$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def countDigits(self, num: int) -> int:
        ans, x = 0, num
        while x:
            x, val = divmod(x, 10)
            ans += num % val == 0
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int countDigits(int num) {
        int ans = 0;
        for (int x = num; x > 0; x /= 10) {
            if (num % (x % 10) == 0) {
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
    int countDigits(int num) {
        int ans = 0;
        for (int x = num; x > 0; x /= 10) {
            if (num % (x % 10) == 0) {
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
func countDigits(num int) (ans int) {
	for x := num; x > 0; x /= 10 {
		if num%(x%10) == 0 {
			ans++
		}
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function countDigits(num: number): number {
    let ans = 0;
    for (let x = num; x; x = (x / 10) | 0) {
        if (num % (x % 10) === 0) {
            ++ans;
        }
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn count_digits(num: i32) -> i32 {
        let mut ans = 0;
        let mut cur = num;
        while cur != 0 {
            if num % (cur % 10) == 0 {
                ans += 1;
            }
            cur /= 10;
        }
        ans
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int countDigits(int num) {
    int ans = 0;
    int cur = num;
    while (cur) {
        if (num % (cur % 10) == 0) {
            ans++;
        }
        cur /= 10;
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function countDigits(num: number): number {
    let ans = 0;
    for (const s of num.toString()) {
        if (num % Number(s) === 0) {
            ans++;
        }
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn count_digits(num: i32) -> i32 {
        num
            .to_string()
            .chars()
            .filter(|&c| c != '0')
            .filter(|&c| num % (c.to_digit(10).unwrap() as i32) == 0)
            .count() as i32
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
