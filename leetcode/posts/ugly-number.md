---
title: Ugly Number
summary: Ugly Number - Solution Explained
url: "/posts/ugly-number"
date: 2020-11-14T01:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Ugly Number LeetCode Solution Explained in all languages", "263", "leetcode question 263", "Ugly Number", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/ugly-number.webp
    alt: Ugly Number - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [263. Ugly Number](https://leetcode.com/problems/ugly-number)


## Description

<p>An <strong>ugly number</strong> is a positive integer whose prime factors are limited to <code>2</code>, <code>3</code>, and <code>5</code>.</p>

<p>Given an integer <code>n</code>, return <code>true</code> <em>if</em> <code>n</code> <em>is an <strong>ugly number</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 6
<strong>Output:</strong> true
<strong>Explanation:</strong> 6 = 2 &times; 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation:</strong> 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 14
<strong>Output:</strong> false
<strong>Explanation:</strong> 14 is not ugly since it includes the prime factor 7.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def isUgly(self, n: int) -> bool:
        if n < 1:
            return False
        for x in [2, 3, 5]:
            while n % x == 0:
                n //= x
        return n == 1
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean isUgly(int n) {
        if (n < 1) return false;
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) return false;
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func isUgly(n int) bool {
	if n < 1 {
		return false
	}
	for _, x := range []int{2, 3, 5} {
		for n%x == 0 {
			n /= x
		}
	}
	return n == 1
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} n
 * @return {boolean}
 */
var isUgly = function (n) {
    if (n < 1) return false;
    while (n % 2 === 0) {
        n /= 2;
    }
    while (n % 3 === 0) {
        n /= 3;
    }
    while (n % 5 === 0) {
        n /= 5;
    }
    return n === 1;
};
```
{{< /terminal >}}

{{< terminal title="PHP Code" >}}
```php
class Solution {
    /**
     * @param Integer $n
     * @return Boolean
     */
    function isUgly($n) {
        while ($n) {
            if ($n % 2 == 0) {
                $n = $n / 2;
            } elseif ($n % 3 == 0) {
                $n = $n / 3;
            } elseif ($n % 5 == 0) {
                $n = $n / 5;
            } else {
                break;
            }
        }
        return $n == 1;
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
