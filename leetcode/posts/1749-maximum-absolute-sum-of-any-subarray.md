---
title: 1749 Maximum Absolute Sum of Any Subarray
summary: 1749 Maximum Absolute Sum of Any Subarray LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1749 Maximum Absolute Sum of Any Subarray LeetCode Solution Explained in all languages", "1749 Maximum Absolute Sum of Any Subarray", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1749 Maximum Absolute Sum of Any Subarray - Solution Explained/problem-solving.webp
    alt: 1749 Maximum Absolute Sum of Any Subarray
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1749. Maximum Absolute Sum of Any Subarray](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray)


## Description

<p>You are given an integer array <code>nums</code>. The <strong>absolute sum</strong> of a subarray <code>[nums<sub>l</sub>, nums<sub>l+1</sub>, ..., nums<sub>r-1</sub>, nums<sub>r</sub>]</code> is <code>abs(nums<sub>l</sub> + nums<sub>l+1</sub> + ... + nums<sub>r-1</sub> + nums<sub>r</sub>)</code>.</p>

<p>Return <em>the <strong>maximum</strong> absolute sum of any <strong>(possibly empty)</strong> subarray of </em><code>nums</code>.</p>

<p>Note that <code>abs(x)</code> is defined as follows:</p>

<ul>
	<li>If <code>x</code> is a negative integer, then <code>abs(x) = -x</code>.</li>
	<li>If <code>x</code> is a non-negative integer, then <code>abs(x) = x</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,-3,2,3,-4]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,-5,1,-4,3,-2]
<strong>Output:</strong> 8
<strong>Explanation:</strong> The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

## Solutions

### Solution 1: Dynamic Programming

We define $f[i]$ to represent the maximum value of the subarray ending with $nums[i]$, and define $g[i]$ to represent the minimum value of the subarray ending with $nums[i]$. Then the state transition equation of $f[i]$ and $g[i]$ is as follows:

$$
\begin{aligned}
f[i] &= \max(f[i - 1], 0) + nums[i] \\
g[i] &= \min(g[i - 1], 0) + nums[i]
\end{aligned}
$$

The final answer is the maximum value of $max(f[i], |g[i]|)$.

Since $f[i]$ and $g[i]$ are only related to $f[i - 1]$ and $g[i - 1]$, we can use two variables to replace the array, reducing the space complexity to $O(1)$.

Time complexity $O(n)$, space complexity $O(1)$, where $n$ is the length of the array $nums$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        f = g = 0
        ans = 0
        for x in nums:
            f = max(f, 0) + x
            g = min(g, 0) + x
            ans = max(ans, f, abs(g))
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int f = 0, g = 0;
        int ans = 0;
        for (int x : nums) {
            f = Math.max(f, 0) + x;
            g = Math.min(g, 0) + x;
            ans = Math.max(ans, Math.max(f, Math.abs(g)));
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
    int maxAbsoluteSum(vector<int>& nums) {
        int f = 0, g = 0;
        int ans = 0;
        for (int& x : nums) {
            f = max(f, 0) + x;
            g = min(g, 0) + x;
            ans = max({ans, f, abs(g)});
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func maxAbsoluteSum(nums []int) (ans int) {
	var f, g int
	for _, x := range nums {
		f = max(f, 0) + x
		g = min(g, 0) + x
		ans = max(ans, max(f, abs(g)))
	}
	return
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function maxAbsoluteSum(nums: number[]): number {
    let f = 0;
    let g = 0;
    let ans = 0;
    for (const x of nums) {
        f = Math.max(f, 0) + x;
        g = Math.min(g, 0) + x;
        ans = Math.max(ans, f, -g);
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn max_absolute_sum(nums: Vec<i32>) -> i32 {
        let mut f = 0;
        let mut g = 0;
        let mut ans = 0;
        for x in nums {
            f = i32::max(f, 0) + x;
            g = i32::min(g, 0) + x;
            ans = i32::max(ans, f.max(-g));
        }
        ans
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
