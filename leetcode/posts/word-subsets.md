---
title: Word Subsets
summary: Word Subsets - Solution Explained
url: "/posts/word-subsets"
date: 2020-10-17T20:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Word Subsets LeetCode Solution Explained in all languages", "916", "leetcode question 916", "Word Subsets", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/word-subsets.webp
    alt: Word Subsets - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [916. Word Subsets](https://leetcode.com/problems/word-subsets)


## Description

<p>You are given two string arrays <code>words1</code> and <code>words2</code>.</p>

<p>A string <code>b</code> is a <strong>subset</strong> of string <code>a</code> if every letter in <code>b</code> occurs in <code>a</code> including multiplicity.</p>

<ul>
	<li>For example, <code>&quot;wrr&quot;</code> is a subset of <code>&quot;warrior&quot;</code> but is not a subset of <code>&quot;world&quot;</code>.</li>
</ul>

<p>A string <code>a</code> from <code>words1</code> is <strong>universal</strong> if for every string <code>b</code> in <code>words2</code>, <code>b</code> is a subset of <code>a</code>.</p>

<p>Return an array of all the <strong>universal</strong> strings in <code>words1</code>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> words1 = [&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;], words2 = [&quot;e&quot;,&quot;o&quot;]
<strong>Output:</strong> [&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> words1 = [&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;], words2 = [&quot;l&quot;,&quot;e&quot;]
<strong>Output:</strong> [&quot;apple&quot;,&quot;google&quot;,&quot;leetcode&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words1.length, words2.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= words1[i].length, words2[i].length &lt;= 10</code></li>
	<li><code>words1[i]</code> and <code>words2[i]</code> consist only of lowercase English letters.</li>
	<li>All the strings of <code>words1</code> are <strong>unique</strong>.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        cnt = Counter()
        for b in words2:
            t = Counter(b)
            for c, v in t.items():
                cnt[c] = max(cnt[c], v)
        ans = []
        for a in words1:
            t = Counter(a)
            if all(v <= t[c] for c, v in cnt.items()):
                ans.append(a)
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public List<String> wordSubsets(String[] words1, String[] words2) {
        int[] cnt = new int[26];
        for (var b : words2) {
            int[] t = new int[26];
            for (int i = 0; i < b.length(); ++i) {
                t[b.charAt(i) - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                cnt[i] = Math.max(cnt[i], t[i]);
            }
        }
        List<String> ans = new ArrayList<>();
        for (var a : words1) {
            int[] t = new int[26];
            for (int i = 0; i < a.length(); ++i) {
                t[a.charAt(i) - 'a']++;
            }
            boolean ok = true;
            for (int i = 0; i < 26; ++i) {
                if (cnt[i] > t[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans.add(a);
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
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int cnt[26] = {0};
        int t[26];
        for (auto& b : words2) {
            memset(t, 0, sizeof t);
            for (auto& c : b) {
                t[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                cnt[i] = max(cnt[i], t[i]);
            }
        }
        vector<string> ans;
        for (auto& a : words1) {
            memset(t, 0, sizeof t);
            for (auto& c : a) {
                t[c - 'a']++;
            }
            bool ok = true;
            for (int i = 0; i < 26; ++i) {
                if (cnt[i] > t[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans.emplace_back(a);
            }
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func wordSubsets(words1 []string, words2 []string) (ans []string) {
	cnt := [26]int{}
	for _, b := range words2 {
		t := [26]int{}
		for _, c := range b {
			t[c-'a']++
		}
		for i := range cnt {
			cnt[i] = max(cnt[i], t[i])
		}
	}
	for _, a := range words1 {
		t := [26]int{}
		for _, c := range a {
			t[c-'a']++
		}
		ok := true
		for i, v := range cnt {
			if v > t[i] {
				ok = false
				break
			}
		}
		if ok {
			ans = append(ans, a)
		}
	}
	return
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
