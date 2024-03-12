---
title: Hexspeak
summary: Hexspeak - Solution Explained
url: "/posts/hexspeak"
date: 2020-10-03T01:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Hexspeak LeetCode Solution Explained in all languages", "1271", "leetcode question 1271", "Hexspeak", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/hexspeak.webp
    alt: Hexspeak - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1271. Hexspeak](https://leetcode.com/problems/hexspeak)


## Description

<p>A decimal number can be converted to its <strong>Hexspeak representation</strong> by first converting it to an uppercase hexadecimal string, then replacing all occurrences of the digit <code>&#39;0&#39;</code> with the letter <code>&#39;O&#39;</code>, and the digit <code>&#39;1&#39;</code> with the letter <code>&#39;I&#39;</code>. Such a representation is valid if and only if it consists only of the letters in the set <code>{&#39;A&#39;, &#39;B&#39;, &#39;C&#39;, &#39;D&#39;, &#39;E&#39;, &#39;F&#39;, &#39;I&#39;, &#39;O&#39;}</code>.</p>

<p>Given a string <code>num</code> representing a decimal integer <code>n</code>, <em>return the <strong>Hexspeak representation</strong> of </em><code>n</code><em> if it is valid, otherwise return </em><code>&quot;ERROR&quot;</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;257&quot;
<strong>Output:</strong> &quot;IOI&quot;
<strong>Explanation:</strong> 257 is 101 in hexadecimal.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;3&quot;
<strong>Output:</strong> &quot;ERROR&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 12</code></li>
	<li><code>num</code> does not contain leading zeros.</li>
	<li>num represents an integer in the range <code>[1, 10<sup>12</sup>]</code>.</li>
</ul>

## Solutions

### Solution 1: Simulation

Convert the number to a hexadecimal string, then traverse the string, convert the number $0$ to the letter $O$, and the number $1$ to the letter $I$. Finally, check whether the converted string is valid.

The time complexity is $O(\log n)$, where $n$ is the size of the decimal number represented by $num$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def toHexspeak(self, num: str) -> str:
        s = set('ABCDEFIO')
        t = hex(int(num))[2:].upper().replace('0', 'O').replace('1', 'I')
        return t if all(c in s for c in t) else 'ERROR'
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    private static final Set<Character> S = Set.of('A', 'B', 'C', 'D', 'E', 'F', 'I', 'O');

    public String toHexspeak(String num) {
        String t
            = Long.toHexString(Long.valueOf(num)).toUpperCase().replace("0", "O").replace("1", "I");
        for (char c : t.toCharArray()) {
            if (!S.contains(c)) {
                return "ERROR";
            }
        }
        return t;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    string toHexspeak(string num) {
        stringstream ss;
        ss << hex << stol(num);
        string t = ss.str();
        for (int i = 0; i < t.size(); ++i) {
            if (t[i] >= '2' && t[i] <= '9') return "ERROR";
            if (t[i] == '0')
                t[i] = 'O';
            else if (t[i] == '1')
                t[i] = 'I';
            else
                t[i] = t[i] - 32;
        }
        return t;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func toHexspeak(num string) string {
	x, _ := strconv.Atoi(num)
	t := strings.ToUpper(fmt.Sprintf("%x", x))
	t = strings.ReplaceAll(t, "0", "O")
	t = strings.ReplaceAll(t, "1", "I")
	for _, c := range t {
		if c >= '2' && c <= '9' {
			return "ERROR"
		}
	}
	return t
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
