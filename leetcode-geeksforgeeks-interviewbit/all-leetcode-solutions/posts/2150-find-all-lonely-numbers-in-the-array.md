---
title: 2150 Find All Lonely Numbers In The Array
summary: 2150 Find All Lonely Numbers In The Array LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "2150 Find All Lonely Numbers In The Array LeetCode Solution Explained in all languages"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2150 Find All Lonely Numbers In The Array - Solution Explained/problem-solving.webp
    alt: 2150 Find All Lonely Numbers In The Array
    hiddenInList: true
    hiddenInSingle: false
---


# [2150. Find All Lonely Numbers in the Array](https://leetcode.com/problems/find-all-lonely-numbers-in-the-array)


## Description

<p>You are given an integer array <code>nums</code>. A number <code>x</code> is <strong>lonely</strong> when it appears only <strong>once</strong>, and no <strong>adjacent</strong> numbers (i.e. <code>x + 1</code> and <code>x - 1)</code> appear in the array.</p>

<p>Return <em><strong>all</strong> lonely numbers in </em><code>nums</code>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [10,6,5,8]
<strong>Output:</strong> [10,8]
<strong>Explanation:</strong> 
- 10 is a lonely number since it appears exactly once and 9 and 11 does not appear in nums.
- 8 is a lonely number since it appears exactly once and 7 and 9 does not appear in nums.
- 5 is not a lonely number since 6 appears in nums and vice versa.
Hence, the lonely numbers in nums are [10, 8].
Note that [8, 10] may also be returned.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,5,3]
<strong>Output:</strong> [1,5]
<strong>Explanation:</strong> 
- 1 is a lonely number since it appears exactly once and 0 and 2 does not appear in nums.
- 5 is a lonely number since it appears exactly once and 4 and 6 does not appear in nums.
- 3 is not a lonely number since it appears twice.
Hence, the lonely numbers in nums are [1, 5].
Note that [5, 1] may also be returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

```python
class Solution:
    def findLonely(self, nums: List[int]) -> List[int]:
        counter = Counter(nums)
        ans = []
        for num, cnt in counter.items():
            if cnt == 1 and counter[num - 1] == 0 and counter[num + 1] == 0:
                ans.append(num)
        return ans
```

```java
class Solution {

    public List<Integer> findLonely(int[] nums) {
        Map<Integer, Integer> counter = new HashMap<>();
        for (int num : nums) {
            counter.put(num, counter.getOrDefault(num, 0) + 1);
        }
        List<Integer> ans = new ArrayList<>();
        counter.forEach((k, v) -> {
            if (v == 1 && !counter.containsKey(k - 1) && !counter.containsKey(k + 1)) {
                ans.add(k);
            }
        });
        return ans;
    }
}
```

```cpp
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) ++counter[num];
        vector<int> ans;
        for (auto& e : counter) {
            int k = e.first, v = e.second;
            if (v == 1 && !counter.count(k - 1) && !counter.count(k + 1)) ans.push_back(k);
        }
        return ans;
    }
};
```

```go
func findLonely(nums []int) []int {
	counter := make(map[int]int)
	for _, num := range nums {
		counter[num]++
	}
	var ans []int
	for k, v := range counter {
		if v == 1 && counter[k-1] == 0 && counter[k+1] == 0 {
			ans = append(ans, k)
		}
	}
	return ans
}
```

```ts
function findLonely(nums: number[]): number[] {
    let hashMap: Map<number, number> = new Map();
    for (let num of nums) {
        hashMap.set(num, (hashMap.get(num) || 0) + 1);
    }
    let ans: Array<number> = [];
    for (let [num, count] of hashMap.entries()) {
        if (count == 1 && !hashMap.get(num - 1) && !hashMap.get(num + 1)) {
            ans.push(num);
        }
    }
    return ans;
}
```

<!-- tabs:end -->

<!-- end -->
