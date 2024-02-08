---
title: 1566 Detect Pattern of Length M Repeated K or More Times
summary: 1566 Detect Pattern of Length M Repeated K or More Times LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1566 Detect Pattern of Length M Repeated K or More Times LeetCode Solution Explained in all languages", "1566 Detect Pattern of Length M Repeated K or More Times", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1566 Detect Pattern of Length M Repeated K or More Times - Solution Explained/problem-solving.webp
    alt: 1566 Detect Pattern of Length M Repeated K or More Times
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1566. Detect Pattern of Length M Repeated K or More Times](https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times)


## Description

<p>Given an array of positive integers <code>arr</code>, find a pattern of length <code>m</code> that is repeated <code>k</code> or more times.</p>

<p>A <strong>pattern</strong> is a subarray (consecutive sub-sequence) that consists of one or more values, repeated multiple times <strong>consecutively </strong>without overlapping. A pattern is defined by its length and the number of repetitions.</p>

<p>Return <code>true</code> <em>if there exists a pattern of length</em> <code>m</code> <em>that is repeated</em> <code>k</code> <em>or more times, otherwise return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,4,4,4,4], m = 1, k = 3
<strong>Output:</strong> true
<strong>Explanation: </strong>The pattern <strong>(4)</strong> of length 1 is repeated 4 consecutive times. Notice that pattern can be repeated k or more times but not less.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,1,2,1,1,1,3], m = 2, k = 2
<strong>Output:</strong> true
<strong>Explanation: </strong>The pattern <strong>(1,2)</strong> of length 2 is repeated 2 consecutive times. Another valid pattern <strong>(2,1) is</strong> also repeated 2 times.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,1,2,1,3], m = 2, k = 3
<strong>Output:</strong> false
<strong>Explanation: </strong>The pattern (1,2) is of length 2 but is repeated only 2 times. There is no pattern of length 2 that is repeated 3 or more times.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 100</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 100</code></li>
	<li><code>1 &lt;= m &lt;= 100</code></li>
	<li><code>2 &lt;= k &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
        n = len(arr)
        for i in range(n - m * k + 1):
            j = 0
            while j < m * k:
                if arr[i + j] != arr[i + (j % m)]:
                    break
                j += 1
            if j == m * k:
                return True
        return False
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean containsPattern(int[] arr, int m, int k) {
        int n = arr.length;
        for (int i = 0; i <= n - m * k; ++i) {
            int j = 0;
            for (; j < m * k; ++j) {
                if (arr[i + j] != arr[i + (j % m)]) {
                    break;
                }
            }
            if (j == m * k) {
                return true;
            }
        }
        return false;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        for (int i = 0; i <= n - m * k; ++i) {
            int j = 0;
            for (; j < m * k; ++j) {
                if (arr[i + j] != arr[i + (j % m)]) {
                    break;
                }
            }
            if (j == m * k) {
                return true;
            }
        }
        return false;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func containsPattern(arr []int, m int, k int) bool {
	n := len(arr)
	for i := 0; i <= n-m*k; i++ {
		j := 0
		for ; j < m*k; j++ {
			if arr[i+j] != arr[i+(j%m)] {
				break
			}
		}
		if j == m*k {
			return true
		}
	}
	return false
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function containsPattern(arr: number[], m: number, k: number): boolean {
    const n = arr.length;
    for (let i = 0; i <= n - m * k; ++i) {
        let j = 0;
        for (; j < m * k; ++j) {
            if (arr[i + j] != arr[i + (j % m)]) {
                break;
            }
        }
        if (j == m * k) {
            return true;
        }
    }
    return false;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
