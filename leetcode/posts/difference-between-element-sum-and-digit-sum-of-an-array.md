---
title: Difference Between Element Sum and Digit Sum of an Array
summary: Difference Between Element Sum and Digit Sum of an Array - Solution Explained
url: "/posts/difference-between-element-sum-and-digit-sum-of-an-array"
date: 2020-08-11T09:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Difference Between Element Sum and Digit Sum of an Array LeetCode Solution Explained in all languages", "2535", "leetcode question 2535", "Difference Between Element Sum and Digit Sum of an Array", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/difference-between-element-sum-and-digit-sum-of-an-array.webp
    alt: Difference Between Element Sum and Digit Sum of an Array - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2535. Difference Between Element Sum and Digit Sum of an Array](https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array)


## Description

<p>You are given a positive integer array <code>nums</code>.</p>

<ul>
	<li>The <strong>element sum</strong> is the sum of all the elements in <code>nums</code>.</li>
	<li>The <strong>digit sum</strong> is the sum of all the digits (not necessarily distinct) that appear in <code>nums</code>.</li>
</ul>

<p>Return <em>the <strong>absolute</strong> difference between the <strong>element sum</strong> and <strong>digit sum</strong> of </em><code>nums</code>.</p>

<p><strong>Note</strong> that the absolute difference between two integers <code>x</code> and <code>y</code> is defined as <code>|x - y|</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,15,6,3]
<strong>Output:</strong> 9
<strong>Explanation:</strong> 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The element sum of nums is 1 + 2 + 3 + 4 = 10.
The digit sum of nums is 1 + 2 + 3 + 4 = 10.
The absolute difference between the element sum and digit sum is |10 - 10| = 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 2000</code></li>
</ul>

## Solutions

### Solution 1: Simulation

We traverse the array $nums$, calculate the sum of elements $a$ and the sum of digits $b$, and finally return $|a - b|$.

The time complexity is $O(n)$, where $n$ is the length of the array $nums$. The space complexity is $O(1)$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        a, b = sum(nums), 0
        for x in nums:
            while x:
                b += x % 10
                x //= 10
        return abs(a - b)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int differenceOfSum(int[] nums) {
        int a = 0, b = 0;
        for (int x : nums) {
            a += x;
            for (; x > 0; x /= 10) {
                b += x % 10;
            }
        }
        return Math.abs(a - b);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0, b = 0;
        for (int x : nums) {
            a += x;
            for (; x; x /= 10) {
                b += x % 10;
            }
        }
        return abs(a - b);
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func differenceOfSum(nums []int) int {
	a, b := 0, 0
	for _, x := range nums {
		a += x
		for ; x > 0; x /= 10 {
			b += x % 10
		}
	}
	return abs(a - b)
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
function differenceOfSum(nums: number[]): number {
    return nums.reduce((r, v) => {
        r += v;
        while (v !== 0) {
            r -= v % 10;
            v = Math.floor(v / 10);
        }
        return r;
    }, 0);
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn difference_of_sum(nums: Vec<i32>) -> i32 {
        let mut ans = 0;
        for &num in nums.iter() {
            let mut num = num;
            ans += num;
            while num != 0 {
                ans -= num % 10;
                num /= 10;
            }
        }
        ans
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int differenceOfSum(int* nums, int numsSize) {
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        ans += nums[i];
        while (nums[i]) {
            ans -= nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn difference_of_sum(nums: Vec<i32>) -> i32 {
        let a: i32 = nums.iter().sum();
        let b: i32 = nums
            .iter()
            .map(|&n|
                n
                    .to_string()
                    .chars()
                    .map(|c| c.to_digit(10).unwrap() as i32)
                    .sum::<i32>()
            )
            .sum();
        (a - b).abs()
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->