---
title: Smallest Even Multiple
summary: Smallest Even Multiple - Solution Explained
url: "/posts/smallest-even-multiple"
date: 2020-08-16T11:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Smallest Even Multiple LeetCode Solution Explained in all languages", "2413", "leetcode question 2413", "Smallest Even Multiple", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/smallest-even-multiple.webp
    alt: Smallest Even Multiple - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple)


## Description

Given a <strong>positive</strong> integer <code>n</code>, return <em>the smallest positive integer that is a multiple of <strong>both</strong> </em><code>2</code><em> and </em><code>n</code>.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 5
<strong>Output:</strong> 10
<strong>Explanation:</strong> The smallest multiple of both 5 and 2 is 10.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 6
<strong>Output:</strong> 6
<strong>Explanation:</strong> The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 150</code></li>
</ul>

## Solutions

### Solution 1: Mathematics

If $n$ is even, then the least common multiple (LCM) of $2$ and $n$ is $n$ itself. Otherwise, the LCM of $2$ and $n$ is $n \times 2$.

The time complexity is $O(1)$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        return n if n % 2 == 0 else n * 2
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n * 2;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n * 2;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func smallestEvenMultiple(n int) int {
	if n%2 == 0 {
		return n
	}
	return n * 2
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function smallestEvenMultiple(n: number): number {
    return n % 2 === 0 ? n : n * 2;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn smallest_even_multiple(n: i32) -> i32 {
        if n % 2 == 0 {
            return n;
        }
        n * 2
    }
}
```
{{< /terminal >}}

{{< terminal title="C Code" >}}
```c
int smallestEvenMultiple(int n) {
    return n % 2 == 0 ? n : n * 2;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
