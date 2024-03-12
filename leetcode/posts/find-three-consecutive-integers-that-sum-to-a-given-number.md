---
title: Find Three Consecutive Integers That Sum to a Given Number
summary: Find Three Consecutive Integers That Sum to a Given Number - Solution Explained
url: "/posts/find-three-consecutive-integers-that-sum-to-a-given-number"
date: 2020-08-26T07:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Find Three Consecutive Integers That Sum to a Given Number LeetCode Solution Explained in all languages", "2177", "leetcode question 2177", "Find Three Consecutive Integers That Sum to a Given Number", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/find-three-consecutive-integers-that-sum-to-a-given-number.webp
    alt: Find Three Consecutive Integers That Sum to a Given Number - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2177. Find Three Consecutive Integers That Sum to a Given Number](https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number)


## Description

<p>Given an integer <code>num</code>, return <em>three consecutive integers (as a sorted array)</em><em> that <strong>sum</strong> to </em><code>num</code>. If <code>num</code> cannot be expressed as the sum of three consecutive integers, return<em> an <strong>empty</strong> array.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 33
<strong>Output:</strong> [10,11,12]
<strong>Explanation:</strong> 33 can be expressed as 10 + 11 + 12 = 33.
10, 11, 12 are 3 consecutive integers, so we return [10, 11, 12].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 4
<strong>Output:</strong> []
<strong>Explanation:</strong> There is no way to express 4 as the sum of 3 consecutive integers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 10<sup>15</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sumOfThree(self, num: int) -> List[int]:
        x, mod = divmod(num, 3)
        return [] if mod else [x - 1, x, x + 1]
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public long[] sumOfThree(long num) {
        if (num % 3 != 0) {
            return new long[] {};
        }
        long x = num / 3;
        return new long[] {x - 1, x, x + 1};
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3) {
            return {};
        }
        long long x = num / 3;
        return {x - 1, x, x + 1};
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func sumOfThree(num int64) []int64 {
	if num%3 != 0 {
		return []int64{}
	}
	x := num / 3
	return []int64{x - 1, x, x + 1}
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function sumOfThree(num: number): number[] {
    if (num % 3) {
        return [];
    }
    const x = Math.floor(num / 3);
    return [x - 1, x, x + 1];
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
