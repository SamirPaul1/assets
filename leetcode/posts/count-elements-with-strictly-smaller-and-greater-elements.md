---
title: Count Elements With Strictly Smaller and Greater Elements
summary: Count Elements With Strictly Smaller and Greater Elements - Solution Explained
url: "/posts/count-elements-with-strictly-smaller-and-greater-elements"
date: 2020-08-27T12:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Count Elements With Strictly Smaller and Greater Elements LeetCode Solution Explained in all languages", "2148", "leetcode question 2148", "Count Elements With Strictly Smaller and Greater Elements", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/count-elements-with-strictly-smaller-and-greater-elements.webp
    alt: Count Elements With Strictly Smaller and Greater Elements - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2148. Count Elements With Strictly Smaller and Greater Elements](https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements)


## Description

<p>Given an integer array <code>nums</code>, return <em>the number of elements that have <strong>both</strong> a strictly smaller and a strictly greater element appear in </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [11,7,2,15]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element appear in <code>nums</code>.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-3,3,3,90]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The element 3 has the element -3 strictly smaller than it and the element 90 strictly greater than it.
Since there are two elements with the value 3, in total there are 2 elements having both a strictly smaller and a strictly greater element appear in <code>nums</code>.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def countElements(self, nums: List[int]) -> int:
        mi, mx = min(nums), max(nums)
        return sum(mi < num < mx for num in nums)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {

    public int countElements(int[] nums) {
        int mi = 1000000, mx = -1000000;
        for (int num : nums) {
            mi = Math.min(mi, num);
            mx = Math.max(mx, num);
        }
        int ans = 0;
        for (int num : nums) {
            if (mi < num && num < mx) {
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
    int countElements(vector<int>& nums) {
        int mi = 1e6, mx = -1e6;
        for (int num : nums) {
            mi = min(mi, num);
            mx = max(mx, num);
        }
        int ans = 0;
        for (int num : nums)
            if (mi < num && num < mx)
                ++ans;
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func countElements(nums []int) int {
	mi, mx := int(1e6), -int(1e6)
	for _, num := range nums {
		if num < mi {
			mi = num
		}
		if num > mx {
			mx = num
		}
	}
	ans := 0
	for _, num := range nums {
		if mi < num && num < mx {
			ans++
		}
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function countElements(nums: number[]): number {
    const min = Math.min(...nums),
        max = Math.max(...nums);
    let ans = 0;
    for (let i = 0; i < nums.length; ++i) {
        let cur = nums[i];
        if (cur < max && cur > min) {
            ++ans;
        }
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
