---
title: Water Bottles
summary: Water Bottles - Solution Explained
url: "/posts/water-bottles"
date: 2020-09-22T18:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Water Bottles LeetCode Solution Explained in all languages", "1518", "leetcode question 1518", "Water Bottles", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/water-bottles.webp
    alt: Water Bottles - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1518. Water Bottles](https://leetcode.com/problems/water-bottles)


## Description

<p>There are <code>numBottles</code> water bottles that are initially full of water. You can exchange <code>numExchange</code> empty water bottles from the market with one full water bottle.</p>

<p>The operation of drinking a full water bottle turns it into an empty bottle.</p>

<p>Given the two integers <code>numBottles</code> and <code>numExchange</code>, return <em>the <strong>maximum</strong> number of water bottles you can drink</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/1518.Water%20Bottles/images/sample_1_1875.png" style="width: 500px; height: 245px;" />
<pre>
<strong>Input:</strong> numBottles = 9, numExchange = 3
<strong>Output:</strong> 13
<strong>Explanation:</strong> You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://spcdn.pages.dev/leetcode/problems/1518.Water%20Bottles/images/sample_2_1875.png" style="width: 500px; height: 183px;" />
<pre>
<strong>Input:</strong> numBottles = 15, numExchange = 4
<strong>Output:</strong> 19
<strong>Explanation:</strong> You can exchange 4 empty bottles to get 1 full water bottle. 
Number of water bottles you can drink: 15 + 3 + 1 = 19.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= numBottles &lt;= 100</code></li>
	<li><code>2 &lt;= numExchange &lt;= 100</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        ans = numBottles
        while numBottles >= numExchange:
            numBottles -= numExchange - 1
            ans += 1
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        for (; numBottles >= numExchange; ++ans) {
            numBottles -= (numExchange - 1);
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
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        for (; numBottles >= numExchange; ++ans) {
            numBottles -= (numExchange - 1);
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func numWaterBottles(numBottles int, numExchange int) int {
	ans := numBottles
	for ; numBottles >= numExchange; ans++ {
		numBottles -= (numExchange - 1)
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function numWaterBottles(numBottles: number, numExchange: number): number {
    let ans = numBottles;
    for (; numBottles >= numExchange; ++ans) {
        numBottles -= numExchange - 1;
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number} numBottles
 * @param {number} numExchange
 * @return {number}
 */
var numWaterBottles = function (numBottles, numExchange) {
    let ans = numBottles;
    for (; numBottles >= numExchange; ++ans) {
        numBottles -= numExchange - 1;
    }
    return ans;
};
```
{{< /terminal >}}

{{< terminal title="PHP Code" >}}
```php
class Solution {
    /**
     * @param Integer $numBottles
     * @param Integer $numExchange
     * @return Integer
     */
    function numWaterBottles($numBottles, $numExchange) {
        $ans = $numBottles;
        while ($numBottles >= $numExchange) {
            $numBottles = $numBottles - $numExchange + 1;
            $ans++;
        }
        return $ans;
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
