---
title: Minimum Moves to Equal Array Elements
summary: Minimum Moves to Equal Array Elements - Solution Explained
url: "/posts/minimum-moves-to-equal-array-elements"
date: 2020-11-06T03:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Minimum Moves to Equal Array Elements LeetCode Solution Explained in all languages", "453", "leetcode question 453", "Minimum Moves to Equal Array Elements", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/minimum-moves-to-equal-array-elements.webp
    alt: Minimum Moves to Equal Array Elements - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [453. Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements)


## Description

<p>Given an integer array <code>nums</code> of size <code>n</code>, return <em>the minimum number of moves required to make all array elements equal</em>.</p>

<p>In one move, you can increment <code>n - 1</code> elements of the array by <code>1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Only three moves are needed (remember each move increments two elements):
[1,2,3]  =&gt;  [2,3,3]  =&gt;  [3,4,3]  =&gt;  [4,4,4]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li>The answer is guaranteed to fit in a <strong>32-bit</strong> integer.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        return sum(nums) - min(nums) * len(nums)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minMoves(int[] nums) {
        return Arrays.stream(nums).sum() - Arrays.stream(nums).min().getAsInt() * nums.length;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int s = 0;
        int mi = 1 << 30;
        for (int x : nums) {
            s += x;
            mi = min(mi, x);
        }
        return s - mi * nums.size();
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func minMoves(nums []int) int {
	mi := 1 << 30
	s := 0
	for _, x := range nums {
		s += x
		if x < mi {
			mi = x
		}
	}
	return s - mi*len(nums)
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function minMoves(nums: number[]): number {
    let mi = 1 << 30;
    let s = 0;
    for (const x of nums) {
        s += x;
        mi = Math.min(mi, x);
    }
    return s - mi * nums.length;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minMoves(int[] nums) {
        int s = 0;
        int mi = 1 << 30;
        for (int x : nums) {
            s += x;
            mi = Math.min(mi, x);
        }
        return s - mi * nums.length;
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
