---
title: Check If Array Pairs Are Divisible by k
summary: Check If Array Pairs Are Divisible by k - Solution Explained
url: "/posts/check-if-array-pairs-are-divisible-by-k"
date: 2020-09-23T15:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Check If Array Pairs Are Divisible by k LeetCode Solution Explained in all languages", "1497", "leetcode question 1497", "Check If Array Pairs Are Divisible by k", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/check-if-array-pairs-are-divisible-by-k.webp
    alt: Check If Array Pairs Are Divisible by k - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1497. Check If Array Pairs Are Divisible by k](https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k)


## Description

<p>Given an array of integers <code>arr</code> of even length <code>n</code> and an integer <code>k</code>.</p>

<p>We want to divide the array into exactly <code>n / 2</code> pairs such that the sum of each pair is divisible by <code>k</code>.</p>

<p>Return <code>true</code><em> If you can find a way to do that or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,10,6,7,8,9], k = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,6], k = 7
<strong>Output:</strong> true
<strong>Explanation:</strong> Pairs are (1,6),(2,5) and(3,4).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,6], k = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>arr.length == n</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>n</code> is even.</li>
	<li><code>-10<sup>9</sup> &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        cnt = Counter(x % k for x in arr)
        return cnt[0] % 2 == 0 and all(cnt[i] == cnt[k - i] for i in range(1, k))
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean canArrange(int[] arr, int k) {
        int[] cnt = new int[k];
        for (int x : arr) {
            ++cnt[(x % k + k) % k];
        }
        for (int i = 1; i < k; ++i) {
            if (cnt[i] != cnt[k - i]) {
                return false;
            }
        }
        return cnt[0] % 2 == 0;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> cnt(k);
        for (int& x : arr) {
            ++cnt[((x % k) + k) % k];
        }
        for (int i = 1; i < k; ++i) {
            if (cnt[i] != cnt[k - i]) {
                return false;
            }
        }
        return cnt[0] % 2 == 0;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func canArrange(arr []int, k int) bool {
	cnt := make([]int, k)
	for _, x := range arr {
		cnt[(x%k+k)%k]++
	}
	for i := 1; i < k; i++ {
		if cnt[i] != cnt[k-i] {
			return false
		}
	}
	return cnt[0]%2 == 0
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
