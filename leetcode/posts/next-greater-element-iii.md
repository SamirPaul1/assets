---
title: Next Greater Element III
summary: Next Greater Element III - Solution Explained
url: "/posts/next-greater-element-iii"
date: 2020-11-01T20:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Next Greater Element III LeetCode Solution Explained in all languages", "556", "leetcode question 556", "Next Greater Element III", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/next-greater-element-iii.webp
    alt: Next Greater Element III - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [556. Next Greater Element III](https://leetcode.com/problems/next-greater-element-iii)


## Description

<p>Given a positive integer <code>n</code>, find <em>the smallest integer which has exactly the same digits existing in the integer</em> <code>n</code> <em>and is greater in value than</em> <code>n</code>. If no such positive integer exists, return <code>-1</code>.</p>

<p><strong>Note</strong> that the returned integer should fit in <strong>32-bit integer</strong>, if there is a valid answer but it does not fit in <strong>32-bit integer</strong>, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 12
<strong>Output:</strong> 21
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 21
<strong>Output:</strong> -1
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
    def nextGreaterElement(self, n: int) -> int:
        cs = list(str(n))
        n = len(cs)
        i, j = n - 2, n - 1
        while i >= 0 and cs[i] >= cs[i + 1]:
            i -= 1
        if i < 0:
            return -1
        while cs[i] >= cs[j]:
            j -= 1
        cs[i], cs[j] = cs[j], cs[i]
        cs[i + 1 :] = cs[i + 1 :][::-1]
        ans = int(''.join(cs))
        return -1 if ans > 2**31 - 1 else ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int nextGreaterElement(int n) {
        char[] cs = String.valueOf(n).toCharArray();
        n = cs.length;
        int i = n - 2, j = n - 1;
        for (; i >= 0 && cs[i] >= cs[i + 1]; --i)
            ;
        if (i < 0) {
            return -1;
        }
        for (; cs[i] >= cs[j]; --j)
            ;
        swap(cs, i, j);
        reverse(cs, i + 1, n - 1);
        long ans = Long.parseLong(String.valueOf(cs));
        return ans > Integer.MAX_VALUE ? -1 : (int) ans;
    }

    private void swap(char[] cs, int i, int j) {
        char t = cs[i];
        cs[i] = cs[j];
        cs[j] = t;
    }

    private void reverse(char[] cs, int i, int j) {
        for (; i < j; ++i, --j) {
            swap(cs, i, j);
        }
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        n = s.size();
        int i = n - 2, j = n - 1;
        for (; i >= 0 && s[i] >= s[i + 1]; --i)
            ;
        if (i < 0) return -1;
        for (; s[i] >= s[j]; --j)
            ;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        long ans = stol(s);
        return ans > INT_MAX ? -1 : ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func nextGreaterElement(n int) int {
	s := []byte(strconv.Itoa(n))
	n = len(s)
	i, j := n-2, n-1
	for ; i >= 0 && s[i] >= s[i+1]; i-- {
	}
	if i < 0 {
		return -1
	}
	for ; j >= 0 && s[i] >= s[j]; j-- {
	}
	s[i], s[j] = s[j], s[i]
	for i, j = i+1, n-1; i < j; i, j = i+1, j-1 {
		s[i], s[j] = s[j], s[i]
	}
	ans, _ := strconv.Atoi(string(s))
	if ans > math.MaxInt32 {
		return -1
	}
	return ans
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
