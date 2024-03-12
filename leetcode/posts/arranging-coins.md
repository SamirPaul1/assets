---
title: Arranging Coins
summary: Arranging Coins - Solution Explained
url: "/posts/arranging-coins"
date: 2020-11-06T15:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Arranging Coins LeetCode Solution Explained in all languages", "441", "leetcode question 441", "Arranging Coins", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/arranging-coins.webp
    alt: Arranging Coins - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [441. Arranging Coins](https://leetcode.com/problems/arranging-coins)


## Description

<p>You have <code>n</code> coins and you want to build a staircase with these coins. The staircase consists of <code>k</code> rows where the <code>i<sup>th</sup></code> row has exactly <code>i</code> coins. The last row of the staircase <strong>may be</strong> incomplete.</p>

<p>Given the integer <code>n</code>, return <em>the number of <strong>complete rows</strong> of the staircase you will build</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/0441.Arranging%20Coins/images/arrangecoins1-grid.jpg" style="width: 253px; height: 253px;" />
<pre>
<strong>Input:</strong> n = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> Because the 3<sup>rd</sup> row is incomplete, we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/0441.Arranging%20Coins/images/arrangecoins2-grid.jpg" style="width: 333px; height: 333px;" />
<pre>
<strong>Input:</strong> n = 8
<strong>Output:</strong> 3
<strong>Explanation:</strong> Because the 4<sup>th</sup> row is incomplete, we return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def arrangeCoins(self, n: int) -> int:
        return int(math.sqrt(2) * math.sqrt(n + 0.125) - 0.5)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int arrangeCoins(int n) {
        return (int) (Math.sqrt(2) * Math.sqrt(n + 0.125) - 0.5);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
using LL = long;

class Solution {
public:
    int arrangeCoins(int n) {
        LL left = 1, right = n;
        while (left < right) {
            LL mid = left + right + 1 >> 1;
            LL s = (1 + mid) * mid >> 1;
            if (n < s)
                right = mid - 1;
            else
                left = mid;
        }
        return left;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func arrangeCoins(n int) int {
	left, right := 1, n
	for left < right {
		mid := (left + right + 1) >> 1
		if (1+mid)*mid/2 <= n {
			left = mid
		} else {
			right = mid - 1
		}
	}
	return left
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def arrangeCoins(self, n: int) -> int:
        left, right = 1, n
        while left < right:
            mid = (left + right + 1) >> 1
            if (1 + mid) * mid // 2 <= n:
                left = mid
            else:
                right = mid - 1
        return left
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int arrangeCoins(int n) {
        long left = 1, right = n;
        while (left < right) {
            long mid = (left + right + 1) >>> 1;
            if ((1 + mid) * mid / 2 <= n) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return (int) left;
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
