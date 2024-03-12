---
title: Find Target Indices After Sorting Array
summary: Find Target Indices After Sorting Array - Solution Explained
url: "/posts/find-target-indices-after-sorting-array"
date: 2020-08-29T23:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Find Target Indices After Sorting Array LeetCode Solution Explained in all languages", "2089", "leetcode question 2089", "Find Target Indices After Sorting Array", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/find-target-indices-after-sorting-array.webp
    alt: Find Target Indices After Sorting Array - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2089. Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array)


## Description

<p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> and a target element <code>target</code>.</p>

<p>A <strong>target index</strong> is an index <code>i</code> such that <code>nums[i] == target</code>.</p>

<p>Return <em>a list of the target indices of</em> <code>nums</code> after<em> sorting </em><code>nums</code><em> in <strong>non-decreasing</strong> order</em>. If there are no target indices, return <em>an <strong>empty</strong> list</em>. The returned list must be sorted in <strong>increasing</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,5,2,3], target = 2
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> After sorting, nums is [1,<u><strong>2</strong></u>,<u><strong>2</strong></u>,3,5].
The indices where nums[i] == 2 are 1 and 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,5,2,3], target = 3
<strong>Output:</strong> [3]
<strong>Explanation:</strong> After sorting, nums is [1,2,2,<u><strong>3</strong></u>,5].
The index where nums[i] == 3 is 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,5,2,3], target = 5
<strong>Output:</strong> [4]
<strong>Explanation:</strong> After sorting, nums is [1,2,2,3,<u><strong>5</strong></u>].
The index where nums[i] == 5 is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i], target &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        return [i for i, v in enumerate(nums) if v == target]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] == target) {
                ans.add(i);
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
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func targetIndices(nums []int, target int) (ans []int) {
	sort.Ints(nums)
	for i, v := range nums {
		if v == target {
			ans = append(ans, i)
		}
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function targetIndices(nums: number[], target: number): number[] {
    nums.sort((a, b) => a - b);
    let ans: number[] = [];
    for (let i = 0; i < nums.length; ++i) {
        if (nums[i] == target) {
            ans.push(i);
        }
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
