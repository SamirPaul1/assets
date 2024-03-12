---
title: Minimum Value to Get Positive Step by Step Sum
summary: Minimum Value to Get Positive Step by Step Sum - Solution Explained
url: "/posts/minimum-value-to-get-positive-step-by-step-sum"
date: 2020-09-27T03:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Minimum Value to Get Positive Step by Step Sum LeetCode Solution Explained in all languages", "1413", "leetcode question 1413", "Minimum Value to Get Positive Step by Step Sum", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/minimum-value-to-get-positive-step-by-step-sum.webp
    alt: Minimum Value to Get Positive Step by Step Sum - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1413. Minimum Value to Get Positive Step by Step Sum](https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum)


## Description

<p>Given an array of integers&nbsp;<code>nums</code>, you start with an initial <strong>positive</strong> value <em>startValue</em><em>.</em></p>

<p>In each iteration, you calculate the step by step sum of <em>startValue</em>&nbsp;plus&nbsp;elements in <code>nums</code>&nbsp;(from left to right).</p>

<p>Return the minimum <strong>positive</strong> value of&nbsp;<em>startValue</em> such that the step by step sum is never less than 1.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-3,2,-3,4,2]
<strong>Output:</strong> 5
<strong>Explanation: </strong>If you choose startValue = 4, in the third iteration your step by step sum is less than 1.
<strong>step by step sum</strong>
<strong>startValue = 4 | startValue = 5 | nums</strong>
  (4 <strong>-3</strong> ) = 1  | (5 <strong>-3</strong> ) = 2    |  -3
  (1 <strong>+2</strong> ) = 3  | (2 <strong>+2</strong> ) = 4    |   2
  (3 <strong>-3</strong> ) = 0  | (4 <strong>-3</strong> ) = 1    |  -3
  (0 <strong>+4</strong> ) = 4  | (1 <strong>+4</strong> ) = 5    |   4
  (4 <strong>+2</strong> ) = 6  | (5 <strong>+2</strong> ) = 7    |   2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Minimum start value should be positive. 
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,-2,-3]
<strong>Output:</strong> 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        s, t = 0, inf
        for num in nums:
            s += num
            t = min(t, s)
        return max(1, 1 - t)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minStartValue(int[] nums) {
        int s = 0;
        int t = Integer.MAX_VALUE;
        for (int num : nums) {
            s += num;
            t = Math.min(t, s);
        }
        return Math.max(1, 1 - t);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int s = 0, t = INT_MAX;
        for (int num : nums) {
            s += num;
            t = min(t, s);
        }
        return max(1, 1 - t);
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func minStartValue(nums []int) int {
	s, t := 0, 10000
	for _, num := range nums {
		s += num
		if s < t {
			t = s
		}
	}
	if t < 0 {
		return 1 - t
	}
	return 1
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function minStartValue(nums: number[]): number {
    let sum = 0;
    let min = Infinity;
    for (const num of nums) {
        sum += num;
        min = Math.min(min, sum);
    }
    return Math.max(1, 1 - min);
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn min_start_value(nums: Vec<i32>) -> i32 {
        let mut sum = 0;
        let mut min = i32::MAX;
        for num in nums.iter() {
            sum += num;
            min = min.min(sum);
        }
        (1).max(1 - min)
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        s = list(accumulate(nums))
        return 1 if min(s) >= 0 else abs(min(s)) + 1
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
