---
title: Tuple with Same Product
summary: Tuple with Same Product - Solution Explained
url: "/posts/tuple-with-same-product"
date: 2020-09-14T02:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Tuple with Same Product LeetCode Solution Explained in all languages", "1726", "leetcode question 1726", "Tuple with Same Product", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/tuple-with-same-product.webp
    alt: Tuple with Same Product - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1726. Tuple with Same Product](https://leetcode.com/problems/tuple-with-same-product)


## Description

<p>Given an array <code>nums</code> of <strong>distinct</strong> positive integers, return <em>the number of tuples </em><code>(a, b, c, d)</code><em> such that </em><code>a * b = c * d</code><em> where </em><code>a</code><em>, </em><code>b</code><em>, </em><code>c</code><em>, and </em><code>d</code><em> are elements of </em><code>nums</code><em>, and </em><code>a != b != c != d</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,3,4,6]
<strong>Output:</strong> 8
<strong>Explanation:</strong> There are 8 valid tuples:
(2,6,3,4) , (2,6,4,3) , (6,2,3,4) , (6,2,4,3)
(3,4,2,6) , (4,3,2,6) , (3,4,6,2) , (4,3,6,2)
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,4,5,10]
<strong>Output:</strong> 16
<strong>Explanation:</strong> There are 16 valid tuples:
(1,10,2,5) , (1,10,5,2) , (10,1,2,5) , (10,1,5,2)
(2,5,1,10) , (2,5,10,1) , (5,2,1,10) , (5,2,10,1)
(2,10,4,5) , (2,10,5,4) , (10,2,4,5) , (10,2,5,4)
(4,5,2,10) , (4,5,10,2) , (5,4,2,10) , (5,4,10,2)
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li>All elements in <code>nums</code> are <strong>distinct</strong>.</li>
</ul>

## Solutions

### Solution 1: Combination + Hash Table

Assuming there are $n$ pairs of numbers, for any two pairs of numbers $a, b$ and $c, d$ that satisfy the condition $a \times b = c \times d$, there are a total of $\mathrm{C}_n^2 = \frac{n \times (n-1)}{2}$ such combinations.

According to the problem description, each combination that satisfies the above condition can form $8$ tuples that satisfy the problem requirements. Therefore, we can multiply the number of combinations with the same product by $8$ (equivalent to left shifting by $3$ bits) and add them up to get the result.

The time complexity is $O(n^2)$, and the space complexity is $O(n^2)$. Here, $n$ is the length of the array.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        cnt = defaultdict(int)
        for i in range(1, len(nums)):
            for j in range(i):
                x = nums[i] * nums[j]
                cnt[x] += 1
        return sum(v * (v - 1) // 2 for v in cnt.values()) << 3
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int tupleSameProduct(int[] nums) {
        Map<Integer, Integer> cnt = new HashMap<>();
        for (int i = 1; i < nums.length; ++i) {
            for (int j = 0; j < i; ++j) {
                int x = nums[i] * nums[j];
                cnt.merge(x, 1, Integer::sum);
            }
        }
        int ans = 0;
        for (int v : cnt.values()) {
            ans += v * (v - 1) / 2;
        }
        return ans << 3;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (int i = 1; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                int x = nums[i] * nums[j];
                ++cnt[x];
            }
        }
        int ans = 0;
        for (auto& [_, v] : cnt) {
            ans += v * (v - 1) / 2;
        }
        return ans << 3;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func tupleSameProduct(nums []int) int {
	cnt := map[int]int{}
	for i := 1; i < len(nums); i++ {
		for j := 0; j < i; j++ {
			x := nums[i] * nums[j]
			cnt[x]++
		}
	}
	ans := 0
	for _, v := range cnt {
		ans += v * (v - 1) / 2
	}
	return ans << 3
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function tupleSameProduct(nums: number[]): number {
    const cnt: Map<number, number> = new Map();
    for (let i = 1; i < nums.length; ++i) {
        for (let j = 0; j < i; ++j) {
            const x = nums[i] * nums[j];
            cnt.set(x, (cnt.get(x) ?? 0) + 1);
        }
    }
    let ans = 0;
    for (const [_, v] of cnt) {
        ans += (v * (v - 1)) / 2;
    }
    return ans << 3;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
use std::collections::HashMap;

impl Solution {
    pub fn tuple_same_product(nums: Vec<i32>) -> i32 {
        let mut cnt: HashMap<i32, i32> = HashMap::new();
        let mut ans = 0;

        for i in 1..nums.len() {
            for j in 0..i {
                let x = nums[i] * nums[j];
                *cnt.entry(x).or_insert(0) += 1;
            }
        }

        for v in cnt.values() {
            ans += (v * (v - 1)) / 2;
        }

        ans << 3
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
