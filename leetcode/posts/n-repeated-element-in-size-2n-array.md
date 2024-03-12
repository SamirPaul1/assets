---
title: N-Repeated Element in Size 2N Array
summary: N-Repeated Element in Size 2N Array - Solution Explained
url: "/posts/n-repeated-element-in-size-2n-array"
date: 2020-10-15T23:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["N-Repeated Element in Size 2N Array LeetCode Solution Explained in all languages", "961", "leetcode question 961", "N-Repeated Element in Size 2N Array", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/n-repeated-element-in-size-2n-array.webp
    alt: N-Repeated Element in Size 2N Array - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [961. N-Repeated Element in Size 2N Array](https://leetcode.com/problems/n-repeated-element-in-size-2n-array)


## Description

<p>You are given an integer array <code>nums</code> with the following properties:</p>

<ul>
	<li><code>nums.length == 2 * n</code>.</li>
	<li><code>nums</code> contains <code>n + 1</code> <strong>unique</strong> elements.</li>
	<li>Exactly one element of <code>nums</code> is repeated <code>n</code> times.</li>
</ul>

<p>Return <em>the element that is repeated </em><code>n</code><em> times</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,3]
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,1,2,5,3,2]
<strong>Output:</strong> 2
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [5,1,5,2,5,3,5,4]
<strong>Output:</strong> 5
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= n &lt;= 5000</code></li>
	<li><code>nums.length == 2 * n</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> contains <code>n + 1</code> <strong>unique</strong> elements and one of them is repeated exactly <code>n</code> times.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        s = set()
        for x in nums:
            if x in s:
                return x
            s.add(x)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int repeatedNTimes(int[] nums) {
        Set<Integer> s = new HashSet<>(nums.length / 2 + 1);
        for (int i = 0;; ++i) {
            if (!s.add(nums[i])) {
                return nums[i];
            }
        }
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0;; ++i) {
            if (s.count(nums[i])) {
                return nums[i];
            }
            s.insert(nums[i]);
        }
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func repeatedNTimes(nums []int) int {
	s := map[int]bool{}
	for i := 0; ; i++ {
		if s[nums[i]] {
			return nums[i]
		}
		s[nums[i]] = true
	}
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function repeatedNTimes(nums: number[]): number {
    const s: Set<number> = new Set();
    for (const x of nums) {
        if (s.has(x)) {
            return x;
        }
        s.add(x);
    }
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number[]} nums
 * @return {number}
 */
var repeatedNTimes = function (nums) {
    const s = new Set();
    for (const x of nums) {
        if (s.has(x)) {
            return x;
        }
        s.add(x);
    }
};
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
