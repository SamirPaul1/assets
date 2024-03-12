---
title: Total Hamming Distance
summary: Total Hamming Distance - Solution Explained
url: "/posts/total-hamming-distance"
date: 2020-11-05T03:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Total Hamming Distance LeetCode Solution Explained in all languages", "477", "leetcode question 477", "Total Hamming Distance", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/total-hamming-distance.webp
    alt: Total Hamming Distance - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [477. Total Hamming Distance](https://leetcode.com/problems/total-hamming-distance)


## Description

<p>The <a href="https://en.wikipedia.org/wiki/Hamming_distance" target="_blank">Hamming distance</a> between two integers is the number of positions at which the corresponding bits are different.</p>

<p>Given an integer array <code>nums</code>, return <em>the sum of <strong>Hamming distances</strong> between all the pairs of the integers in</em> <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [4,14,2]
<strong>Output:</strong> 6
<strong>Explanation:</strong> In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
showing the four bits relevant in this case).
The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [4,14,4]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li>The answer for the given input will fit in a <strong>32-bit</strong> integer.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def totalHammingDistance(self, nums: List[int]) -> int:
        ans = 0
        for i in range(31):
            a = b = 0
            for v in nums:
                t = (v >> i) & 1
                if t:
                    a += 1
                else:
                    b += 1
            ans += a * b
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int totalHammingDistance(int[] nums) {
        int ans = 0;
        for (int i = 0; i < 31; ++i) {
            int a = 0, b = 0;
            for (int v : nums) {
                int t = (v >> i) & 1;
                a += t;
                b += t ^ 1;
            }
            ans += a * b;
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
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 31; ++i) {
            int a = 0, b = 0;
            for (int& v : nums) {
                int t = (v >> i) & 1;
                a += t;
                b += t ^ 1;
            }
            ans += a * b;
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func totalHammingDistance(nums []int) int {
	ans := 0
	for i := 0; i < 31; i++ {
		a, b := 0, 0
		for _, v := range nums {
			t := (v >> i) & 1
			a += t
			b += t ^ 1
		}
		ans += a * b
	}
	return ans
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
