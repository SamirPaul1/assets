---
title: Number of Subarrays Having Even Product
summary: Number of Subarrays Having Even Product - Solution Explained
url: "/posts/number-of-subarrays-having-even-product"
date: 2020-08-13T01:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Number of Subarrays Having Even Product LeetCode Solution Explained in all languages", "2495", "leetcode question 2495", "Number of Subarrays Having Even Product", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/number-of-subarrays-having-even-product.webp
    alt: Number of Subarrays Having Even Product - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2495. Number of Subarrays Having Even Product](https://leetcode.com/problems/number-of-subarrays-having-even-product)


## Description

<p>Given a <strong>0-indexed</strong> integer array <code>nums</code>, return <em>the number of <span data-keyword="subarray-nonempty">subarrays</span> of </em><code>nums</code><em> having an even product</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [9,6,7,13]
<strong>Output:</strong> 6
<strong>Explanation:</strong> There are 6 subarrays with an even product:
- nums[0..1] = 9 * 6 = 54.
- nums[0..2] = 9 * 6 * 7 = 378.
- nums[0..3] = 9 * 6 * 7 * 13 = 4914.
- nums[1..1] = 6.
- nums[1..2] = 6 * 7 = 42.
- nums[1..3] = 6 * 7 * 13 = 546.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [7,3,5]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no subarrays with an even product.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def evenProduct(self, nums: List[int]) -> int:
        ans, last = 0, -1
        for i, v in enumerate(nums):
            if v % 2 == 0:
                last = i
            ans += last + 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public long evenProduct(int[] nums) {
        long ans = 0;
        int last = -1;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] % 2 == 0) {
                last = i;
            }
            ans += last + 1;
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
    long long evenProduct(vector<int>& nums) {
        long long ans = 0;
        int last = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                last = i;
            }
            ans += last + 1;
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func evenProduct(nums []int) int64 {
	ans, last := 0, -1
	for i, v := range nums {
		if v%2 == 0 {
			last = i
		}
		ans += last + 1
	}
	return int64(ans)
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
