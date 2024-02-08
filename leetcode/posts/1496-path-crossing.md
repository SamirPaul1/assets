---
title: 1496 Path Crossing
summary: 1496 Path Crossing LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1496 Path Crossing LeetCode Solution Explained in all languages", "1496 Path Crossing", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1496 Path Crossing - Solution Explained/problem-solving.webp
    alt: 1496 Path Crossing
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1496. Path Crossing](https://leetcode.com/problems/path-crossing)


## Description

<p>Given a string <code>path</code>, where <code>path[i] = &#39;N&#39;</code>, <code>&#39;S&#39;</code>, <code>&#39;E&#39;</code> or <code>&#39;W&#39;</code>, each representing moving one unit north, south, east, or west, respectively. You start at the origin <code>(0, 0)</code> on a 2D plane and walk on the path specified by <code>path</code>.</p>

<p>Return <code>true</code> <em>if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited</em>. Return <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/1496.Path%20Crossing/images/screen-shot-2020-06-10-at-123929-pm.png" style="width: 400px; height: 358px;" />
<pre>
<strong>Input:</strong> path = &quot;NES&quot;
<strong>Output:</strong> false 
<strong>Explanation:</strong> Notice that the path doesn&#39;t cross any point more than once.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/1496.Path%20Crossing/images/screen-shot-2020-06-10-at-123843-pm.png" style="width: 400px; height: 339px;" />
<pre>
<strong>Input:</strong> path = &quot;NESWW&quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> Notice that the path visits the origin twice.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= path.length &lt;= 10<sup>4</sup></code></li>
	<li><code>path[i]</code> is either <code>&#39;N&#39;</code>, <code>&#39;S&#39;</code>, <code>&#39;E&#39;</code>, or <code>&#39;W&#39;</code>.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def isPathCrossing(self, path: str) -> bool:
        i = j = 0
        vis = {(0, 0)}
        for c in path:
            match c:
                case 'N':
                    i -= 1
                case 'S':
                    i += 1
                case 'E':
                    j += 1
                case 'W':
                    j -= 1
            if (i, j) in vis:
                return True
            vis.add((i, j))
        return False
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean isPathCrossing(String path) {
        int i = 0, j = 0;
        Set<Integer> vis = new HashSet<>();
        vis.add(0);
        for (int k = 0, n = path.length(); k < n; ++k) {
            switch (path.charAt(k)) {
                case 'N' -> --i;
                case 'S' -> ++i;
                case 'E' -> ++j;
                case 'W' -> --j;
            }
            int t = i * 20000 + j;
            if (!vis.add(t)) {
                return true;
            }
        }
        return false;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool isPathCrossing(string path) {
        int i = 0, j = 0;
        unordered_set<int> s{{0}};
        for (char& c : path) {
            if (c == 'N') {
                --i;
            } else if (c == 'S') {
                ++i;
            } else if (c == 'E') {
                ++j;
            } else {
                --j;
            }
            int t = i * 20000 + j;
            if (s.count(t)) {
                return true;
            }
            s.insert(t);
        }
        return false;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func isPathCrossing(path string) bool {
	i, j := 0, 0
	vis := map[int]bool{0: true}
	for _, c := range path {
		switch c {
		case 'N':
			i--
		case 'S':
			i++
		case 'E':
			j++
		case 'W':
			j--
		}
		if vis[i*20000+j] {
			return true
		}
		vis[i*20000+j] = true
	}
	return false
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function isPathCrossing(path: string): boolean {
    let [i, j] = [0, 0];
    const vis: Set<number> = new Set();
    vis.add(0);
    for (const c of path) {
        if (c === 'N') {
            --i;
        } else if (c === 'S') {
            ++i;
        } else if (c === 'E') {
            ++j;
        } else if (c === 'W') {
            --j;
        }
        const t = i * 20000 + j;
        if (vis.has(t)) {
            return true;
        }
        vis.add(t);
    }
    return false;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
