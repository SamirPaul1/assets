---
title: Shifting Letters II
summary: Shifting Letters II - Solution Explained
url: "/posts/shifting-letters-ii"
date: 2020-08-17T19:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Shifting Letters II LeetCode Solution Explained in all languages", "2381", "leetcode question 2381", "Shifting Letters II", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/shifting-letters-ii.webp
    alt: Shifting Letters II - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2381. Shifting Letters II](https://leetcode.com/problems/shifting-letters-ii)


## Description

<p>You are given a string <code>s</code> of lowercase English letters and a 2D integer array <code>shifts</code> where <code>shifts[i] = [start<sub>i</sub>, end<sub>i</sub>, direction<sub>i</sub>]</code>. For every <code>i</code>, <strong>shift</strong> the characters in <code>s</code> from the index <code>start<sub>i</sub></code> to the index <code>end<sub>i</sub></code> (<strong>inclusive</strong>) forward if <code>direction<sub>i</sub> = 1</code>, or shift the characters backward if <code>direction<sub>i</sub> = 0</code>.</p>

<p>Shifting a character <strong>forward</strong> means replacing it with the <strong>next</strong> letter in the alphabet (wrapping around so that <code>&#39;z&#39;</code> becomes <code>&#39;a&#39;</code>). Similarly, shifting a character <strong>backward</strong> means replacing it with the <strong>previous</strong> letter in the alphabet (wrapping around so that <code>&#39;a&#39;</code> becomes <code>&#39;z&#39;</code>).</p>

<p>Return <em>the final string after all such shifts to </em><code>s</code><em> are applied</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abc&quot;, shifts = [[0,1,0],[1,2,1],[0,2,1]]
<strong>Output:</strong> &quot;ace&quot;
<strong>Explanation:</strong> Firstly, shift the characters from index 0 to index 1 backward. Now s = &quot;zac&quot;.
Secondly, shift the characters from index 1 to index 2 forward. Now s = &quot;zbd&quot;.
Finally, shift the characters from index 0 to index 2 forward. Now s = &quot;ace&quot;.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;dztz&quot;, shifts = [[0,0,0],[1,1,1]]
<strong>Output:</strong> &quot;catz&quot;
<strong>Explanation:</strong> Firstly, shift the characters from index 0 to index 0 backward. Now s = &quot;cztz&quot;.
Finally, shift the characters from index 1 to index 1 forward. Now s = &quot;catz&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, shifts.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>shifts[i].length == 3</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt; s.length</code></li>
	<li><code>0 &lt;= direction<sub>i</sub> &lt;= 1</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        n = len(s)
        d = [0] * (n + 1)
        for i, j, v in shifts:
            if v == 0:
                v = -1
            d[i] += v
            d[j + 1] -= v
        for i in range(1, n + 1):
            d[i] += d[i - 1]
        return ''.join(
            chr(ord('a') + (ord(s[i]) - ord('a') + d[i] + 26) % 26) for i in range(n)
        )
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public String shiftingLetters(String s, int[][] shifts) {
        int n = s.length();
        int[] d = new int[n + 1];
        for (int[] e : shifts) {
            if (e[2] == 0) {
                e[2]--;
            }
            d[e[0]] += e[2];
            d[e[1] + 1] -= e[2];
        }
        for (int i = 1; i <= n; ++i) {
            d[i] += d[i - 1];
        }
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; ++i) {
            int j = (s.charAt(i) - 'a' + d[i] % 26 + 26) % 26;
            ans.append((char) ('a' + j));
        }
        return ans.toString();
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> d(n + 1);
        for (auto& e : shifts) {
            if (e[2] == 0) {
                e[2]--;
            }
            d[e[0]] += e[2];
            d[e[1] + 1] -= e[2];
        }
        for (int i = 1; i <= n; ++i) {
            d[i] += d[i - 1];
        }
        string ans;
        for (int i = 0; i < n; ++i) {
            int j = (s[i] - 'a' + d[i] % 26 + 26) % 26;
            ans += ('a' + j);
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func shiftingLetters(s string, shifts [][]int) string {
	n := len(s)
	d := make([]int, n+1)
	for _, e := range shifts {
		if e[2] == 0 {
			e[2]--
		}
		d[e[0]] += e[2]
		d[e[1]+1] -= e[2]
	}
	for i := 1; i <= n; i++ {
		d[i] += d[i-1]
	}
	ans := []byte{}
	for i, c := range s {
		j := (int(c-'a') + d[i]%26 + 26) % 26
		ans = append(ans, byte('a'+j))
	}
	return string(ans)
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->