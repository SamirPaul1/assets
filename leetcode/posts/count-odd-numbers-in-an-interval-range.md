---
title: Count Odd Numbers in an Interval Range
summary: Count Odd Numbers in an Interval Range - Solution Explained
url: "/posts/count-odd-numbers-in-an-interval-range"
date: 2020-09-22T13:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Count Odd Numbers in an Interval Range LeetCode Solution Explained in all languages", "1523", "leetcode question 1523", "Count Odd Numbers in an Interval Range", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/count-odd-numbers-in-an-interval-range.webp
    alt: Count Odd Numbers in an Interval Range - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range)


## Description

<p>Given two non-negative integers <code>low</code> and <code><font face="monospace">high</font></code>. Return the <em>count of odd numbers between </em><code>low</code><em> and </em><code><font face="monospace">high</font></code><em>&nbsp;(inclusive)</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> low = 3, high = 7
<strong>Output:</strong> 3
<b>Explanation: </b>The odd numbers between 3 and 7 are [3,5,7].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> low = 8, high = 10
<strong>Output:</strong> 1
<b>Explanation: </b>The odd numbers between 8 and 10 are [9].</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= low &lt;= high&nbsp;&lt;= 10^9</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        return ((high + 1) >> 1) - (low >> 1)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int countOdds(int low, int high) {
        return ((high + 1) >> 1) - (low >> 1);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1 >> 1) - (low >> 1);
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func countOdds(low int, high int) int {
	return ((high + 1) >> 1) - (low >> 1)
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function countOdds(low: number, high: number): number {
    return ((high + 1) >> 1) - (low >> 1);
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        ((high + 1) >> 1) - (low >> 1)
    }
}
```
{{< /terminal >}}

{{< terminal title="PHP Code" >}}
```php
class Solution {
    /**
     * @param Integer $low
     * @param Integer $high
     * @return Integer
     */
    function countOdds($low, $high) {
        return ($high + 1 >> 1) - ($low >> 1);
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int countOdds(int low, int high) {
    return ((high + 1) >> 1) - (low >> 1);
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
