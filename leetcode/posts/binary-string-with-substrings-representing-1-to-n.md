---
title: Binary String With Substrings Representing 1 To N
summary: Binary String With Substrings Representing 1 To N - Solution Explained
url: "/posts/binary-string-with-substrings-representing-1-to-n"
date: 2020-10-13T16:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Binary String With Substrings Representing 1 To N LeetCode Solution Explained in all languages", "1016", "leetcode question 1016", "Binary String With Substrings Representing 1 To N", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/binary-string-with-substrings-representing-1-to-n.webp
    alt: Binary String With Substrings Representing 1 To N - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1016. Binary String With Substrings Representing 1 To N](https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n)


## Description

<p>Given a binary string <code>s</code> and a positive integer <code>n</code>, return <code>true</code><em> if the binary representation of all the integers in the range </em><code>[1, n]</code><em> are <strong>substrings</strong> of </em><code>s</code><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s = "0110", n = 3
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> s = "0110", n = 4
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code> is either <code>&#39;0&#39;</code> or <code>&#39;1&#39;</code>.</li>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def queryString(self, s: str, n: int) -> bool:
        if n > 1000:
            return False
        return all(bin(i)[2:] in s for i in range(n, n // 2, -1))
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean queryString(String s, int n) {
        if (n > 1000) {
            return false;
        }
        for (int i = n; i > n / 2; i--) {
            if (!s.contains(Integer.toBinaryString(i))) {
                return false;
            }
        }
        return true;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool queryString(string s, int n) {
        if (n > 1000) {
            return false;
        }
        for (int i = n; i > n / 2; --i) {
            string b = bitset<32>(i).to_string();
            b = b.substr(b.find_first_not_of('0'));
            if (s.find(b) == string::npos) {
                return false;
            }
        }
        return true;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func queryString(s string, n int) bool {
	if n > 1000 {
		return false
	}
	for i := n; i > n/2; i-- {
		if !strings.Contains(s, strconv.FormatInt(int64(i), 2)) {
			return false
		}
	}
	return true
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function queryString(s: string, n: number): boolean {
    if (n > 1000) {
        return false;
    }
    for (let i = n; i > n / 2; --i) {
        if (s.indexOf(i.toString(2)) === -1) {
            return false;
        }
    }
    return true;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
