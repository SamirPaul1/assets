---
title: Jewels and Stones
summary: Jewels and Stones - Solution Explained
url: "/posts/jewels-and-stones"
date: 2020-10-23T21:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Jewels and Stones LeetCode Solution Explained in all languages", "771", "leetcode question 771", "Jewels and Stones", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/jewels-and-stones.webp
    alt: Jewels and Stones - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [771. Jewels and Stones](https://leetcode.com/problems/jewels-and-stones)


## Description

<p>You&#39;re given strings <code>jewels</code> representing the types of stones that are jewels, and <code>stones</code> representing the stones you have. Each character in <code>stones</code> is a type of stone you have. You want to know how many of the stones you have are also jewels.</p>

<p>Letters are case sensitive, so <code>&quot;a&quot;</code> is considered a different type of stone from <code>&quot;A&quot;</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> jewels = "aA", stones = "aAAbbbb"
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> jewels = "z", stones = "ZZ"
<strong>Output:</strong> 0
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;jewels.length, stones.length &lt;= 50</code></li>
	<li><code>jewels</code> and <code>stones</code> consist of only English letters.</li>
	<li>All the characters of&nbsp;<code>jewels</code> are <strong>unique</strong>.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        s = set(jewels)
        return sum(c in s for c in stones)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int[] s = new int[128];
        for (char c : jewels.toCharArray()) {
            s[c] = 1;
        }
        int ans = 0;
        for (char c : stones.toCharArray()) {
            ans += s[c];
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
    int numJewelsInStones(string jewels, string stones) {
        int s[128] = {0};
        for (char c : jewels) s[c] = 1;
        int ans = 0;
        for (char c : stones) ans += s[c];
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numJewelsInStones(jewels string, stones string) (ans int) {
	s := [128]int{}
	for _, c := range jewels {
		s[c] = 1
	}
	for _, c := range stones {
		ans += s[c]
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numJewelsInStones(jewels: string, stones: string): number {
    const s = new Set([...jewels]);
    let ans = 0;
    for (const c of stones) {
        s.has(c) && ans++;
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
use std::collections::HashSet;
impl Solution {
    pub fn num_jewels_in_stones(jewels: String, stones: String) -> i32 {
        let mut set = jewels.as_bytes().iter().collect::<HashSet<&u8>>();
        let mut ans = 0;
        for c in stones.as_bytes() {
            if set.contains(c) {
                ans += 1;
            }
        }
        ans
    }
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function (jewels, stones) {
    const s = new Set(jewels.split(''));
    return stones.split('').reduce((prev, val) => prev + s.has(val), 0);
};
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int numJewelsInStones(char* jewels, char* stones) {
    int set[128] = {0};
    for (int i = 0; jewels[i]; i++) {
        set[jewels[i]] = 1;
    }
    int ans = 0;
    for (int i = 0; stones[i]; i++) {
        set[stones[i]] && ans++;
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
