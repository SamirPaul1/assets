---
title: Number of Good Pairs
summary: Number of Good Pairs - Solution Explained
url: "/posts/number-of-good-pairs"
date: 2020-09-23T00:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Number of Good Pairs LeetCode Solution Explained in all languages", "1512", "leetcode question 1512", "Number of Good Pairs", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/number-of-good-pairs.webp
    alt: Number of Good Pairs - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1512. Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs)


## Description

<p>Given an array of integers <code>nums</code>, return <em>the number of <strong>good pairs</strong></em>.</p>

<p>A pair <code>(i, j)</code> is called <em>good</em> if <code>nums[i] == nums[j]</code> and <code>i</code> &lt; <code>j</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,1,1,3]
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,1,1,1]
<strong>Output:</strong> 6
<strong>Explanation:</strong> Each pair in the array are <em>good</em>.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        ans = 0
        cnt = Counter()
        for x in nums:
            ans += cnt[x]
            cnt[x] += 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numIdenticalPairs(int[] nums) {
        int ans = 0;
        int[] cnt = new int[101];
        for (int x : nums) {
            ans += cnt[x]++;
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
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        int cnt[101]{};
        for (int& x : nums) {
            ans += cnt[x]++;
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numIdenticalPairs(nums []int) (ans int) {
	cnt := [101]int{}
	for _, x := range nums {
		ans += cnt[x]
		cnt[x]++
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numIdenticalPairs(nums: number[]): number {
    const cnt = new Array(101).fill(0);
    let ans = 0;
    for (const x of nums) {
        ans += cnt[x]++;
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn num_identical_pairs(nums: Vec<i32>) -> i32 {
        let mut cnt = [0; 101];
        let mut ans = 0;
        for &num in nums.iter() {
            ans += cnt[num as usize];
            cnt[num as usize] += 1;
        }
        ans
    }
}
```
{{< /terminal >}}

{{< terminal title="PHP Code" >}}
```php
class Solution {
    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function numIdenticalPairs($nums) {
        $arr = array_values(array_unique($nums));
        for ($i = 0; $i < count($nums); $i++) {
            $v[$nums[$i]] += 1;
        }
        $rs = 0;
        for ($j = 0; $j < count($arr); $j++) {
            $rs += ($v[$arr[$j]] * ($v[$arr[$j]] - 1)) / 2;
        }
        return $rs;
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int numIdenticalPairs(int* nums, int numsSize) {
    int cnt[101] = {0};
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        ans += cnt[nums[i]]++;
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        return sum(v * (v - 1) for v in cnt.values()) >> 1
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numIdenticalPairs(int[] nums) {
        int[] cnt = new int[101];
        for (int x : nums) {
            ++cnt[x];
        }
        int ans = 0;
        for (int v : cnt) {
            ans += v * (v - 1) / 2;
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
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101]{};
        for (int& x : nums) {
            ++cnt[x];
        }
        int ans = 0;
        for (int v : cnt) {
            ans += v * (v - 1) / 2;
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numIdenticalPairs(nums []int) (ans int) {
	cnt := [101]int{}
	for _, x := range nums {
		cnt[x]++
	}
	for _, v := range cnt {
		ans += v * (v - 1) / 2
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numIdenticalPairs(nums: number[]): number {
    const cnt = new Array(101).fill(0);
    for (const x of nums) {
        ++cnt[x];
    }
    let ans = 0;
    for (const v of cnt) {
        ans += v * (v - 1);
    }
    return ans >> 1;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn num_identical_pairs(nums: Vec<i32>) -> i32 {
        let mut cnt = [0; 101];
        for &num in nums.iter() {
            cnt[num as usize] += 1;
        }
        let mut ans = 0;
        for &v in cnt.iter() {
            ans += (v * (v - 1)) / 2;
        }
        ans
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int numIdenticalPairs(int* nums, int numsSize) {
    int cnt[101] = {0};
    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < 101; ++i) {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
