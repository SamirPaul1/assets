---
title: Calculate Delayed Arrival Time
summary: Calculate Delayed Arrival Time - Solution Explained
url: "/posts/calculate-delayed-arrival-time"
date: 2020-08-06T13:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Calculate Delayed Arrival Time LeetCode Solution Explained in all languages", "2651", "leetcode question 2651", "Calculate Delayed Arrival Time", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/calculate-delayed-arrival-time.webp
    alt: Calculate Delayed Arrival Time - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2651. Calculate Delayed Arrival Time](https://leetcode.com/problems/calculate-delayed-arrival-time)


## Description

<p>You are given a positive integer <code>arrivalTime</code> denoting the arrival time of a train in hours, and another positive integer <code>delayedTime</code> denoting the amount of delay in hours.</p>

<p>Return <em>the time when the train will arrive at the station.</em></p>

<p>Note that the time in this problem is in 24-hours format.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arrivalTime = 15, delayedTime = 5 
<strong>Output:</strong> 20 
<strong>Explanation:</strong> Arrival time of the train was 15:00 hours. It is delayed by 5 hours. Now it will reach at 15+5 = 20 (20:00 hours).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arrivalTime = 13, delayedTime = 11
<strong>Output:</strong> 0
<strong>Explanation:</strong> Arrival time of the train was 13:00 hours. It is delayed by 11 hours. Now it will reach at 13+11=24 (Which is denoted by 00:00 in 24 hours format so return 0).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arrivaltime &lt;&nbsp;24</code></li>
	<li><code>1 &lt;= delayedTime &lt;= 24</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        return (arrivalTime + delayedTime) % 24
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func findDelayedArrivalTime(arrivalTime int, delayedTime int) int {
	return (arrivalTime + delayedTime) % 24
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function findDelayedArrivalTime(arrivalTime: number, delayedTime: number): number {
    return (arrivalTime + delayedTime) % 24;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn find_delayed_arrival_time(arrival_time: i32, delayed_time: i32) -> i32 {
        (arrival_time + delayed_time) % 24
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
