---
title: Divisor Game
summary: Divisor Game - Solution Explained
url: "/posts/divisor-game"
date: 2020-10-13T07:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Divisor Game LeetCode Solution Explained in all languages", "1025", "leetcode question 1025", "Divisor Game", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/divisor-game.webp
    alt: Divisor Game - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1025. Divisor Game](https://leetcode.com/problems/divisor-game)


## Description

<p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there is a number <code>n</code> on the chalkboard. On each player&#39;s turn, that player makes a move consisting of:</p>

<ul>
	<li>Choosing any <code>x</code> with <code>0 &lt; x &lt; n</code> and <code>n % x == 0</code>.</li>
	<li>Replacing the number <code>n</code> on the chalkboard with <code>n - x</code>.</li>
</ul>

<p>Also, if a player cannot make a move, they lose the game.</p>

<p>Return <code>true</code> <em>if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> true
<strong>Explanation:</strong> Alice chooses 1, and Bob has no more moves.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> Alice chooses 1, Bob chooses 1, and Alice has no more moves.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def divisorGame(self, n: int) -> bool:
        return n % 2 == 0
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean divisorGame(int n) {
        return n % 2 == 0;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func divisorGame(n int) bool {
	return n%2 == 0
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
