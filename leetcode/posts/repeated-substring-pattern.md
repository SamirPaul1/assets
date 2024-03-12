---
title: Repeated Substring Pattern
summary: Repeated Substring Pattern - Solution Explained
url: "/posts/repeated-substring-pattern"
date: 2020-11-05T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Repeated Substring Pattern LeetCode Solution Explained in all languages", "459", "leetcode question 459", "Repeated Substring Pattern", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/repeated-substring-pattern.webp
    alt: Repeated Substring Pattern - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [459. Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern)


## Description

<p>Given a string <code>s</code>, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abab&quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> It is the substring &quot;ab&quot; twice.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aba&quot;
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabcabcabc&quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> It is the substring &quot;abc&quot; four times or the substring &quot;abcabc&quot; twice.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        return (s + s).index(s, 1) < len(s)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean repeatedSubstringPattern(String s) {
        String str = s + s;
        return str.substring(1, str.length() - 1).contains(s);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s + s).find(s, 1) < s.size();
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func repeatedSubstringPattern(s string) bool {
	return strings.Index(s[1:]+s, s) < len(s)-1
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function repeatedSubstringPattern(s: string): boolean {
    return (s + s).slice(1, (s.length << 1) - 1).includes(s);
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn repeated_substring_pattern(s: String) -> bool {
        (s.clone() + &s)[1..s.len() * 2 - 1].contains(&s)
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function repeatedSubstringPattern(s: string): boolean {
    const n = s.length;
    for (let i = 0; i < n >> 1; i++) {
        const len = i + 1;
        if (n % len !== 0) {
            continue;
        }
        const t = s.slice(0, len);
        let j: number;
        for (j = len; j < n; j += len) {
            if (s.slice(j, j + len) !== t) {
                break;
            }
        }
        if (j === n) {
            return true;
        }
    }
    return false;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
