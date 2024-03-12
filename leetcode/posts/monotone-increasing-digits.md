---
title: Monotone Increasing Digits
summary: Monotone Increasing Digits - Solution Explained
url: "/posts/monotone-increasing-digits"
date: 2020-10-25T06:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Monotone Increasing Digits LeetCode Solution Explained in all languages", "738", "leetcode question 738", "Monotone Increasing Digits", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/monotone-increasing-digits.webp
    alt: Monotone Increasing Digits - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [738. Monotone Increasing Digits](https://leetcode.com/problems/monotone-increasing-digits)


## Description

<p>An integer has <strong>monotone increasing digits</strong> if and only if each pair of adjacent digits <code>x</code> and <code>y</code> satisfy <code>x &lt;= y</code>.</p>

<p>Given an integer <code>n</code>, return <em>the largest number that is less than or equal to </em><code>n</code><em> with <strong>monotone increasing digits</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 9
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1234
<strong>Output:</strong> 1234
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 332
<strong>Output:</strong> 299
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def monotoneIncreasingDigits(self, n: int) -> int:
        s = list(str(n))
        i = 1
        while i < len(s) and s[i - 1] <= s[i]:
            i += 1
        if i < len(s):
            while i and s[i - 1] > s[i]:
                s[i - 1] = str(int(s[i - 1]) - 1)
                i -= 1
            i += 1
            while i < len(s):
                s[i] = '9'
                i += 1
        return int(''.join(s))
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int monotoneIncreasingDigits(int n) {
        char[] s = String.valueOf(n).toCharArray();
        int i = 1;
        for (; i < s.length && s[i - 1] <= s[i]; ++i)
            ;
        if (i < s.length) {
            for (; i > 0 && s[i - 1] > s[i]; --i) {
                --s[i - 1];
            }
            ++i;
            for (; i < s.length; ++i) {
                s[i] = '9';
            }
        }
        return Integer.parseInt(String.valueOf(s));
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int i = 1;
        for (; i < s.size() && s[i - 1] <= s[i]; ++i)
            ;
        if (i < s.size()) {
            for (; i > 0 && s[i - 1] > s[i]; --i) {
                --s[i - 1];
            }
            ++i;
            for (; i < s.size(); ++i) {
                s[i] = '9';
            }
        }
        return stoi(s);
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func monotoneIncreasingDigits(n int) int {
	s := []byte(strconv.Itoa(n))
	i := 1
	for ; i < len(s) && s[i-1] <= s[i]; i++ {
	}
	if i < len(s) {
		for ; i > 0 && s[i-1] > s[i]; i-- {
			s[i-1]--
		}
		i++
		for ; i < len(s); i++ {
			s[i] = '9'
		}
	}
	ans, _ := strconv.Atoi(string(s))
	return ans
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
