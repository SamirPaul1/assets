---
title: 2979 Most Expensive Item That Can Not Be Bought
summary: 2979 Most Expensive Item That Can Not Be Bought LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["2979 Most Expensive Item That Can Not Be Bought LeetCode Solution Explained in all languages", "2979 Most Expensive Item That Can Not Be Bought", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:2979 Most Expensive Item That Can Not Be Bought - Solution Explained/problem-solving.webp
    alt: 2979 Most Expensive Item That Can Not Be Bought
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2979. Most Expensive Item That Can Not Be Bought](https://leetcode.com/problems/most-expensive-item-that-can-not-be-bought)


## Description

<p>You are given two <strong>distinct</strong> <strong>prime</strong> numbers <code>primeOne</code> and <code>primeTwo</code>.</p>

<p>Alice and Bob are visiting a market. The market has an <strong>infinite</strong> number of items, for <strong>any</strong> positive integer <code>x</code> there exists an item whose price is <code>x</code>. Alice wants to buy some items from the market to gift to Bob. She has an <strong>infinite</strong> number of coins in the denomination <code>primeOne</code> and <code>primeTwo</code>. She wants to know the <strong>most expensive</strong> item she can <strong>not</strong> buy to gift to Bob.</p>

<p>Return <em>the price of the <strong>most expensive</strong> item which Alice can not gift to Bob</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> primeOne = 2, primeTwo = 5
<strong>Output:</strong> 3
<strong>Explanation:</strong> The prices of items which cannot be bought are [1,3]. It can be shown that all items with a price greater than 3 can be bought using a combination of coins of denominations 2 and 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> primeOne = 5, primeTwo = 7
<strong>Output:</strong> 23
<strong>Explanation:</strong> The prices of items which cannot be bought are [1,2,3,4,6,8,9,11,13,16,18,23]. It can be shown that all items with a price greater than 23 can be bought.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt; primeOne, primeTwo &lt; 10<sup>4</sup></code></li>
	<li><code>primeOne</code>, <code>primeTwo</code> are prime numbers.</li>
	<li><code>primeOne * primeTwo &lt; 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1: Chicken McNugget Theorem

According to the Chicken McNugget Theorem, for two coprime positive integers $a$ and $b$, the largest number that cannot be expressed as a combination of $a$ and $b$ is $ab - a - b$.

The time complexity is $O(1)$, and the space complexity is $O(1)$.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def mostExpensiveItem(self, primeOne: int, primeTwo: int) -> int:
        return primeOne * primeTwo - primeOne - primeTwo
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int mostExpensiveItem(int primeOne, int primeTwo) {
        return primeOne * primeTwo - primeOne - primeTwo;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int mostExpensiveItem(int primeOne, int primeTwo) {
        return primeOne * primeTwo - primeOne - primeTwo;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func mostExpensiveItem(primeOne int, primeTwo int) int {
	return primeOne*primeTwo - primeOne - primeTwo
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function mostExpensiveItem(primeOne: number, primeTwo: number): number {
    return primeOne * primeTwo - primeOne - primeTwo;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn most_expensive_item(prime_one: i32, prime_two: i32) -> i32 {
        prime_one * prime_two - prime_one - prime_two
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
