---
title: 0709 To Lower Case
summary: 0709 To Lower Case LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["0709 To Lower Case LeetCode Solution Explained in all languages", "0709 To Lower Case", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0709 To Lower Case - Solution Explained/problem-solving.webp
    alt: 0709 To Lower Case
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [709. To Lower Case](https://leetcode.com/problems/to-lower-case)


## Description

<p>Given a string <code>s</code>, return <em>the string after replacing every uppercase letter with the same lowercase letter</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Hello&quot;
<strong>Output:</strong> &quot;hello&quot;
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;here&quot;
<strong>Output:</strong> &quot;here&quot;
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;LOVELY&quot;
<strong>Output:</strong> &quot;lovely&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of printable ASCII characters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def toLowerCase(self, s: str) -> str:
        return "".join([chr(ord(c) | 32) if c.isupper() else c for c in s])
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public String toLowerCase(String s) {
        char[] cs = s.toCharArray();
        for (int i = 0; i < cs.length; ++i) {
            if (cs[i] >= 'A' && cs[i] <= 'Z') {
                cs[i] |= 32;
            }
        }
        return String.valueOf(cs);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c |= 32;
            }
        }
        return s;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func toLowerCase(s string) string {
	cs := []byte(s)
	for i, c := range cs {
		if c >= 'A' && c <= 'Z' {
			cs[i] |= 32
		}
	}
	return string(cs)
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function toLowerCase(s: string): string {
    return s.toLowerCase();
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn to_lower_case(s: String) -> String {
        s.to_ascii_lowercase()
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
char* toLowerCase(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] |= 32;
        }
    }
    return s;
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function toLowerCase(s: string): string {
    return [...s].map(c => String.fromCharCode(c.charCodeAt(0) | 32)).join('');
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn to_lower_case(s: String) -> String {
        s.as_bytes()
            .iter()
            .map(|&c| char::from(if c >= b'A' && c <= b'Z' { c | 32 } else { c }))
            .collect()
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
