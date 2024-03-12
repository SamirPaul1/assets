---
title: Minimum Add to Make Parentheses Valid
summary: Minimum Add to Make Parentheses Valid - Solution Explained
url: "/posts/minimum-add-to-make-parentheses-valid"
date: 2020-10-17T15:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Minimum Add to Make Parentheses Valid LeetCode Solution Explained in all languages", "921", "leetcode question 921", "Minimum Add to Make Parentheses Valid", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/minimum-add-to-make-parentheses-valid.webp
    alt: Minimum Add to Make Parentheses Valid - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [921. Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid)


## Description

<p>A parentheses string is valid if and only if:</p>

<ul>
	<li>It is the empty string,</li>
	<li>It can be written as <code>AB</code> (<code>A</code> concatenated with <code>B</code>), where <code>A</code> and <code>B</code> are valid strings, or</li>
	<li>It can be written as <code>(A)</code>, where <code>A</code> is a valid string.</li>
</ul>

<p>You are given a parentheses string <code>s</code>. In one move, you can insert a parenthesis at any position of the string.</p>

<ul>
	<li>For example, if <code>s = &quot;()))&quot;</code>, you can insert an opening parenthesis to be <code>&quot;(<strong>(</strong>)))&quot;</code> or a closing parenthesis to be <code>&quot;())<strong>)</strong>)&quot;</code>.</li>
</ul>

<p>Return <em>the minimum number of moves required to make </em><code>s</code><em> valid</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;())&quot;
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(((&quot;
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code> is either <code>&#39;(&#39;</code> or <code>&#39;)&#39;</code>.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        stk = []
        for c in s:
            if c == ')' and stk and stk[-1] == '(':
                stk.pop()
            else:
                stk.append(c)
        return len(stk)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minAddToMakeValid(String s) {
        Deque<Character> stk = new ArrayDeque<>();
        for (char c : s.toCharArray()) {
            if (c == ')' && !stk.isEmpty() && stk.peek() == '(') {
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        return stk.size();
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int minAddToMakeValid(string s) {
        string stk;
        for (char c : s) {
            if (c == ')' && stk.size() && stk.back() == '(')
                stk.pop_back();
            else
                stk.push_back(c);
        }
        return stk.size();
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func minAddToMakeValid(s string) int {
	stk := []rune{}
	for _, c := range s {
		if c == ')' && len(stk) > 0 && stk[len(stk)-1] == '(' {
			stk = stk[:len(stk)-1]
		} else {
			stk = append(stk, c)
		}
	}
	return len(stk)
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        ans = cnt = 0
        for c in s:
            if c == '(':
                cnt += 1
            elif cnt:
                cnt -= 1
            else:
                ans += 1
        ans += cnt
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minAddToMakeValid(String s) {
        int ans = 0, cnt = 0;
        for (char c : s.toCharArray()) {
            if (c == '(') {
                ++cnt;
            } else if (cnt > 0) {
                --cnt;
            } else {
                ++ans;
            }
        }
        ans += cnt;
        return ans;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, cnt = 0;
        for (char c : s) {
            if (c == '(')
                ++cnt;
            else if (cnt)
                --cnt;
            else
                ++ans;
        }
        ans += cnt;
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func minAddToMakeValid(s string) int {
	ans, cnt := 0, 0
	for _, c := range s {
		if c == '(' {
			cnt++
		} else if cnt > 0 {
			cnt--
		} else {
			ans++
		}
	}
	ans += cnt
	return ans
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
