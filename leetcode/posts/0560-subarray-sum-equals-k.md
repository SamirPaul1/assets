---
title: 0560 Subarray Sum Equals K
summary: 0560 Subarray Sum Equals K LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["0560 Subarray Sum Equals K LeetCode Solution Explained in all languages", "0560 Subarray Sum Equals K", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0560 Subarray Sum Equals K - Solution Explained/problem-solving.webp
    alt: 0560 Subarray Sum Equals K
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k)


## Description

<p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the total number of subarrays whose sum equals to</em> <code>k</code>.</p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,1], k = 2
<strong>Output:</strong> 2
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3], k = 3
<strong>Output:</strong> 2
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>-10<sup>7</sup> &lt;= k &lt;= 10<sup>7</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        counter = Counter({0: 1})
        ans = s = 0
        for num in nums:
            s += num
            ans += counter[s - k]
            counter[s] += 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> counter = new HashMap<>();
        counter.put(0, 1);
        int ans = 0, s = 0;
        for (int num : nums) {
            s += num;
            ans += counter.getOrDefault(s - k, 0);
            counter.put(s, counter.getOrDefault(s, 0) + 1);
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
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        counter[0] = 1;
        int ans = 0, s = 0;
        for (int& num : nums) {
            s += num;
            ans += counter[s - k];
            ++counter[s];
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func subarraySum(nums []int, k int) int {
	counter := map[int]int{0: 1}
	ans, s := 0, 0
	for _, num := range nums {
		s += num
		ans += counter[s-k]
		counter[s]++
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function subarraySum(nums: number[], k: number): number {
    let ans = 0,
        s = 0;
    const counter = new Map();
    counter.set(0, 1);
    for (const num of nums) {
        s += num;
        ans += counter.get(s - k) || 0;
        counter.set(s, (counter.get(s) || 0) + 1);
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn subarray_sum(mut nums: Vec<i32>, k: i32) -> i32 {
        let n = nums.len();
        let mut count = 0;
        for i in 0..n {
            let num = nums[i];
            if num == k {
                count += 1;
            }
            for j in 0..i {
                nums[j] += num;
                if nums[j] == k {
                    count += 1;
                }
            }
        }
        count
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Rust Code" >}}
```rust
use std::collections::HashMap;

impl Solution {
    pub fn subarray_sum(nums: Vec<i32>, k: i32) -> i32 {
        let mut res = 0;
        let mut sum = 0;
        let mut map = HashMap::new();
        map.insert(0, 1);
        nums.iter().for_each(|num| {
            sum += num;
            res += map.get(&(sum - k)).unwrap_or(&0);
            map.insert(sum, map.get(&sum).unwrap_or(&0) + 1);
        });
        res
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
