---
title: 2710 Remove Trailing Zeros From a String
summary: 2710 Remove Trailing Zeros From a String LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2710 Remove Trailing Zeros From a String LeetCode Solution Explained in all languages", "2710 Remove Trailing Zeros From a String", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2710 Remove Trailing Zeros From a String - Solution Explained/problem-solving.webp
    alt: 2710 Remove Trailing Zeros From a String
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2710. Remove Trailing Zeros From a String](https://leetcode.com/problems/remove-trailing-zeros-from-a-string)


## Description

<p>Given a <strong>positive</strong> integer <code>num</code> represented as a string, return <em>the integer </em><code>num</code><em> without trailing zeros as a string</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;51230100&quot;
<strong>Output:</strong> &quot;512301&quot;
<strong>Explanation:</strong> Integer &quot;51230100&quot; has 2 trailing zeros, we remove them and return integer &quot;512301&quot;.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;123&quot;
<strong>Output:</strong> &quot;123&quot;
<strong>Explanation:</strong> Integer &quot;123&quot; has no trailing zeros, we return integer &quot;123&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 1000</code></li>
	<li><code>num</code> consists&nbsp;of only digits.</li>
	<li><code>num</code> doesn&#39;t&nbsp;have any leading zeros.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        return num.rstrip("0")
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public String removeTrailingZeros(String num) {
        int i = num.length() - 1;
        while (num.charAt(i) == '0') {
            --i;
        }
        return num.substring(0, i + 1);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    string removeTrailingZeros(string num) {
        while (num.back() == '0') {
            num.pop_back();
        }
        return num;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func removeTrailingZeros(num string) string {
	i := len(num) - 1
	for num[i] == '0' {
		i--
	}
	return num[:i+1]
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function removeTrailingZeros(num: string): string {
    let i = num.length - 1;
    while (num[i] === '0') {
        --i;
    }
    return num.substring(0, i + 1);
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn remove_trailing_zeros(num: String) -> String {
        let mut i = num.len() - 1;

        while num.chars().nth(i) == Some('0') {
            i -= 1;
        }

        num[..i + 1].to_string()
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn remove_trailing_zeros(num: String) -> String {
        num.chars()
            .rev()
            .skip_while(|&c| c == '0')
            .collect::<String>()
            .chars()
            .rev()
            .collect::<String>()
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
