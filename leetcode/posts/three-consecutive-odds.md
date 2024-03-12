---
title: Three Consecutive Odds
summary: Three Consecutive Odds - Solution Explained
url: "/posts/three-consecutive-odds"
date: 2020-09-21T10:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Three Consecutive Odds LeetCode Solution Explained in all languages", "1550", "leetcode question 1550", "Three Consecutive Odds", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/three-consecutive-odds.webp
    alt: Three Consecutive Odds - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1550. Three Consecutive Odds](https://leetcode.com/problems/three-consecutive-odds)


## Description

Given an integer array <code>arr</code>, return <code>true</code>&nbsp;if there are three consecutive odd numbers in the array. Otherwise, return&nbsp;<code>false</code>.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [2,6,4,1]
<strong>Output:</strong> false
<b>Explanation:</b> There are no three consecutive odds.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,34,3,4,5,7,23,12]
<strong>Output:</strong> true
<b>Explanation:</b> [5,7,23] are three consecutive odds.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 1000</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        cnt = 0
        for v in arr:
            if v & 1:
                cnt += 1
            else:
                cnt = 0
            if cnt == 3:
                return True
        return False
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        int cnt = 0;
        for (int v : arr) {
            if (v % 2 == 1) {
                ++cnt;
            } else {
                cnt = 0;
            }
            if (cnt == 3) {
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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0;
        for (int v : arr) {
            if (v & 1)
                ++cnt;
            else
                cnt = 0;
            if (cnt == 3) return true;
        }
        return false;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func threeConsecutiveOdds(arr []int) bool {
	cnt := 0
	for _, v := range arr {
		if v%2 == 1 {
			cnt++
		} else {
			cnt = 0
		}
		if cnt == 3 {
			return true
		}
	}
	return false
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function threeConsecutiveOdds(arr: number[]): boolean {
    let cnt = 0;
    for (const v of arr) {
        if (v & 1) {
            ++cnt;
        } else {
            cnt = 0;
        }
        if (cnt == 3) {
            return true;
        }
    }
    return false;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        for i in range(len(arr) - 2):
            if arr[i] % 2 + arr[i + 1] % 2 + arr[i + 2] % 2 == 3:
                return True
        return False
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
