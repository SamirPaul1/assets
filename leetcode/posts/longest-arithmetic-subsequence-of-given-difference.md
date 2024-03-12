---
title: Longest Arithmetic Subsequence of Given Difference
summary: Longest Arithmetic Subsequence of Given Difference - Solution Explained
url: "/posts/longest-arithmetic-subsequence-of-given-difference"
date: 2020-10-05T06:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Longest Arithmetic Subsequence of Given Difference LeetCode Solution Explained in all languages", "1218", "leetcode question 1218", "Longest Arithmetic Subsequence of Given Difference", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/longest-arithmetic-subsequence-of-given-difference.webp
    alt: Longest Arithmetic Subsequence of Given Difference - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1218. Longest Arithmetic Subsequence of Given Difference](https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference)


## Description

<p>Given an integer array <code>arr</code> and an integer <code>difference</code>, return the length of the longest subsequence in <code>arr</code> which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals <code>difference</code>.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from <code>arr</code> by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4], difference = 1
<strong>Output:</strong> 4
<strong>Explanation: </strong>The longest arithmetic subsequence is [1,2,3,4].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,3,5,7], difference = 1
<strong>Output:</strong> 1
<strong>Explanation: </strong>The longest arithmetic subsequence is any single element.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,5,7,8,5,3,4,2,1], difference = -2
<strong>Output:</strong> 4
<strong>Explanation: </strong>The longest arithmetic subsequence is [7,5,3,1].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= arr[i], difference &lt;= 10<sup>4</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def longestSubsequence(self, arr: List[int], difference: int) -> int:
        f = defaultdict(int)
        for x in arr:
            f[x] = f[x - difference] + 1
        return max(f.values())
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int longestSubsequence(int[] arr, int difference) {
        Map<Integer, Integer> f = new HashMap<>();
        int ans = 0;
        for (int x : arr) {
            f.put(x, f.getOrDefault(x - difference, 0) + 1);
            ans = Math.max(ans, f.get(x));
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
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> f;
        int ans = 0;
        for (int x : arr) {
            f[x] = f[x - difference] + 1;
            ans = max(ans, f[x]);
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func longestSubsequence(arr []int, difference int) (ans int) {
	f := map[int]int{}
	for _, x := range arr {
		f[x] = f[x-difference] + 1
		ans = max(ans, f[x])
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function longestSubsequence(arr: number[], difference: number): number {
    const f: Map<number, number> = new Map();
    for (const x of arr) {
        f.set(x, (f.get(x - difference) ?? 0) + 1);
    }
    return Math.max(...f.values());
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number[]} arr
 * @param {number} difference
 * @return {number}
 */
var longestSubsequence = function (arr, difference) {
    const f = new Map();
    for (const x of arr) {
        f.set(x, (f.get(x - difference) || 0) + 1);
    }
    return Math.max(...f.values());
};
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
