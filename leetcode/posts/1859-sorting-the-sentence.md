---
title: 1859 Sorting the Sentence
summary: 1859 Sorting the Sentence LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1859 Sorting the Sentence LeetCode Solution Explained in all languages", "1859 Sorting the Sentence", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1859 Sorting the Sentence - Solution Explained/problem-solving.webp
    alt: 1859 Sorting the Sentence
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1859. Sorting the Sentence](https://leetcode.com/problems/sorting-the-sentence)


## Description

<p>A <strong>sentence</strong> is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.</p>

<p>A sentence can be <strong>shuffled</strong> by appending the <strong>1-indexed word position</strong> to each word then rearranging the words in the sentence.</p>

<ul>
	<li>For example, the sentence <code>&quot;This is a sentence&quot;</code> can be shuffled as <code>&quot;sentence4 a3 is2 This1&quot;</code> or <code>&quot;is2 sentence4 This1 a3&quot;</code>.</li>
</ul>

<p>Given a <strong>shuffled sentence</strong> <code>s</code> containing no more than <code>9</code> words, reconstruct and return <em>the original sentence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;is2 sentence4 This1 a3&quot;
<strong>Output:</strong> &quot;This is a sentence&quot;
<strong>Explanation:</strong> Sort the words in s to their original positions &quot;This1 is2 a3 sentence4&quot;, then remove the numbers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Myself2 Me1 I4 and3&quot;
<strong>Output:</strong> &quot;Me Myself and I&quot;
<strong>Explanation:</strong> Sort the words in s to their original positions &quot;Me1 Myself2 and3 I4&quot;, then remove the numbers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= s.length &lt;= 200</code></li>
	<li><code>s</code> consists of lowercase and uppercase English letters, spaces, and digits from <code>1</code> to <code>9</code>.</li>
	<li>The number of words in <code>s</code> is between <code>1</code> and <code>9</code>.</li>
	<li>The words in <code>s</code> are separated by a single space.</li>
	<li><code>s</code> contains no leading or trailing spaces.</li>
</ul>

## Solutions

### Solution 1: String Splitting

First, we split the string $s$ by spaces to get the string array $words$. Then, we create a string array $ans$ of length $|words|$ to store the answer.

Next, we iterate over each string $w$ in the string array $words$, find the position $i$ represented by the last character of $w$, then take the first $|w|-1$ characters of $w$ as the new string $w'$, and place $w'$ in the $i$th position of the array $ans$.

Finally, we join the array $ans$ into a string by spaces, which is the answer.

The time complexity is $O(n)$, and the space complexity is $O(n)$. Where $n$ is the length of the string $s$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sortSentence(self, s: str) -> str:
        ws = [(w[:-1], int(w[-1])) for w in s.split()]
        ws.sort(key=lambda x: x[1])
        return ' '.join(w for w, _ in ws)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public String sortSentence(String s) {
        String[] ws = s.split(" ");
        int n = ws.length;
        String[] ans = new String[n];
        for (int i = 0; i < n; ++i) {
            String w = ws[i];
            ans[w.charAt(w.length() - 1) - '1'] = w.substring(0, w.length() - 1);
        }
        return String.join(" ", ans);
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    string sortSentence(string s) {
        istringstream iss(s);
        string w;
        vector<string> ws;
        while (iss >> w) {
            ws.push_back(w);
        }
        vector<string> ss(ws.size());
        for (auto& w : ws) {
            ss[w.back() - '1'] = w.substr(0, w.size() - 1);
        }
        string ans;
        for (auto& w : ss) {
            ans += w + " ";
        }
        ans.pop_back();
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func sortSentence(s string) string {
	ws := strings.Split(s, " ")
	ans := make([]string, len(ws))
	for _, w := range ws {
		ans[w[len(w)-1]-'1'] = w[:len(w)-1]
	}
	return strings.Join(ans, " ")
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function sortSentence(s: string): string {
    const ws = s.split(' ');
    const ans = Array(ws.length);
    for (const w of ws) {
        ans[w.charCodeAt(w.length - 1) - '1'.charCodeAt(0)] = w.slice(0, -1);
    }
    return ans.join(' ');
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {string} s
 * @return {string}
 */
var sortSentence = function (s) {
    const ws = s.split(' ');
    const ans = Array(ws.length);
    for (const w of ws) {
        ans[w.charCodeAt(w.length - 1) - '1'.charCodeAt(0)] = w.slice(0, -1);
    }
    return ans.join(' ');
};
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sortSentence(self, s: str) -> str:
        ws = s.split()
        ans = [None] * len(ws)
        for w in ws:
            ans[int(w[-1]) - 1] = w[:-1]
        return ' '.join(ans)
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
