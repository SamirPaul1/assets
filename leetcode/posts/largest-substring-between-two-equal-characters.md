---
title: Largest Substring Between Two Equal Characters
summary: Largest Substring Between Two Equal Characters - Solution Explained
url: "/posts/largest-substring-between-two-equal-characters"
date: 2020-09-18T08:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Largest Substring Between Two Equal Characters LeetCode Solution Explained in all languages", "1624", "leetcode question 1624", "Largest Substring Between Two Equal Characters", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/largest-substring-between-two-equal-characters.webp
    alt: Largest Substring Between Two Equal Characters - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1624. Largest Substring Between Two Equal Characters](https://leetcode.com/problems/largest-substring-between-two-equal-characters)


## Description

<p>Given a string <code>s</code>, return <em>the length of the longest substring between two equal characters, excluding the two characters.</em> If there is no such substring return <code>-1</code>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aa&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> The optimal substring here is an empty substring between the two <code>&#39;a&#39;s</code>.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abca&quot;
<strong>Output:</strong> 2
<strong>Explanation:</strong> The optimal substring here is &quot;bc&quot;.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;cbzxy&quot;
<strong>Output:</strong> -1
<strong>Explanation:</strong> There are no characters that appear twice in s.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 300</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        d = {}
        ans = -1
        for i, c in enumerate(s):
            if c in d:
                ans = max(ans, i - d[c] - 1)
            else:
                d[c] = i
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int[] d = new int[26];
        Arrays.fill(d, -1);
        int ans = -1;
        for (int i = 0; i < s.length(); ++i) {
            int j = s.charAt(i) - 'a';
            if (d[j] == -1) {
                d[j] = i;
            } else {
                ans = Math.max(ans, i - d[j] - 1);
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
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> d(26, -1);
        int ans = -1;
        for (int i = 0; i < s.size(); ++i) {
            int j = s[i] - 'a';
            if (d[j] == -1) {
                d[j] = i;
            } else {
                ans = max(ans, i - d[j] - 1);
            }
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func maxLengthBetweenEqualCharacters(s string) int {
	d := make([]int, 26)
	for i := range d {
		d[i] = -1
	}
	ans := -1
	for i, c := range s {
		c -= 'a'
		if d[c] == -1 {
			d[c] = i
		} else {
			ans = max(ans, i-d[c]-1)
		}
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function maxLengthBetweenEqualCharacters(s: string): number {
    const n = s.length;
    const pos = new Array(26).fill(-1);
    let res = -1;
    for (let i = 0; i < n; i++) {
        const j = s[i].charCodeAt(0) - 'a'.charCodeAt(0);
        if (pos[j] === -1) {
            pos[j] = i;
        } else {
            res = Math.max(res, i - pos[j] - 1);
        }
    }
    return res;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn max_length_between_equal_characters(s: String) -> i32 {
        let s = s.as_bytes();
        let n = s.len();
        let mut pos = [-1; 26];
        let mut res = -1;
        for i in 0..n {
            let j = (s[i] - b'a') as usize;
            let i = i as i32;
            if pos[j] == -1 {
                pos[j] = i;
            } else {
                res = res.max(i - pos[j] - 1);
            }
        }
        res
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
#define max(a, b) (((a) > (b)) ? (a) : (b))

int maxLengthBetweenEqualCharacters(char* s) {
    int pos[26];
    memset(pos, -1, sizeof(pos));
    int n = strlen(s);
    int res = -1;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        int j = c - 'a';
        if (pos[j] == -1) {
            pos[j] = i;
        } else {
            res = max(res, i - pos[j] - 1);
        }
    }
    return res;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
