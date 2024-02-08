---
title: 1446 Consecutive Characters
summary: 1446 Consecutive Characters LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1446 Consecutive Characters LeetCode Solution Explained in all languages", "1446 Consecutive Characters", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1446 Consecutive Characters - Solution Explained/problem-solving.webp
    alt: 1446 Consecutive Characters
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1446. Consecutive Characters](https://leetcode.com/problems/consecutive-characters)


## Description

<p>The <strong>power</strong> of the string is the maximum length of a non-empty substring that contains only one unique character.</p>

<p>Given a string <code>s</code>, return <em>the <strong>power</strong> of</em> <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;leetcode&quot;
<strong>Output:</strong> 2
<strong>Explanation:</strong> The substring &quot;ee&quot; is of length 2 with the character &#39;e&#39; only.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abbcccddddeeeeedcba&quot;
<strong>Output:</strong> 5
<strong>Explanation:</strong> The substring &quot;eeeee&quot; is of length 5 with the character &#39;e&#39; only.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def maxPower(self, s: str) -> int:
        ans = t = 1
        for a, b in pairwise(s):
            if a == b:
                t += 1
                ans = max(ans, t)
            else:
                t = 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int maxPower(String s) {
        int ans = 1, t = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                ans = Math.max(ans, ++t);
            } else {
                t = 1;
            }
        }
        return ans;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int maxPower(string s) {
        int ans = 1, t = 1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                ans = max(ans, ++t);
            } else {
                t = 1;
            }
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func maxPower(s string) int {
	ans, t := 1, 1
	for i := 1; i < len(s); i++ {
		if s[i] == s[i-1] {
			t++
			ans = max(ans, t)
		} else {
			t = 1
		}
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function maxPower(s: string): number {
    let ans = 1;
    let t = 1;
    for (let i = 1; i < s.length; ++i) {
        if (s[i] === s[i - 1]) {
            ans = Math.max(ans, ++t);
        } else {
            t = 1;
        }
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
