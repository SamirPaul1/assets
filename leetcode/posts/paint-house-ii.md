---
title: Paint House II
summary: Paint House II - Solution Explained
url: "/posts/paint-house-ii"
date: 2020-11-13T23:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Paint House II LeetCode Solution Explained in all languages", "265", "leetcode question 265", "Paint House II", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/paint-house-ii.webp
    alt: Paint House II - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [265. Paint House II](https://leetcode.com/problems/paint-house-ii)


## Description

<p>There are a row of <code>n</code> houses, each house can be painted with one of the <code>k</code> colors. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color.</p>

<p>The cost of painting each house with a certain color is represented by an <code>n x k</code> cost matrix costs.</p>

<ul>
	<li>For example, <code>costs[0][0]</code> is the cost of painting house <code>0</code> with color <code>0</code>; <code>costs[1][2]</code> is the cost of painting house <code>1</code> with color <code>2</code>, and so on...</li>
</ul>

<p>Return <em>the minimum cost to paint all houses</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> costs = [[1,5,3],[2,9,4]]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
Paint house 0 into color 0, paint house 1 into color 2. Minimum cost: 1 + 4 = 5; 
Or paint house 0 into color 2, paint house 1 into color 0. Minimum cost: 3 + 2 = 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> costs = [[1,3],[2,4]]
<strong>Output:</strong> 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>costs.length == n</code></li>
	<li><code>costs[i].length == k</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>2 &lt;= k &lt;= 20</code></li>
	<li><code>1 &lt;= costs[i][j] &lt;= 20</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you solve it in <code>O(nk)</code> runtime?</p>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def minCostII(self, costs: List[List[int]]) -> int:
        n, k = len(costs), len(costs[0])
        f = costs[0][:]
        for i in range(1, n):
            g = costs[i][:]
            for j in range(k):
                t = min(f[h] for h in range(k) if h != j)
                g[j] += t
            f = g
        return min(f)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int minCostII(int[][] costs) {
        int n = costs.length, k = costs[0].length;
        int[] f = costs[0].clone();
        for (int i = 1; i < n; ++i) {
            int[] g = costs[i].clone();
            for (int j = 0; j < k; ++j) {
                int t = Integer.MAX_VALUE;
                for (int h = 0; h < k; ++h) {
                    if (h != j) {
                        t = Math.min(t, f[h]);
                    }
                }
                g[j] += t;
            }
            f = g;
        }
        return Arrays.stream(f).min().getAsInt();
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        int n = costs.size(), k = costs[0].size();
        vector<int> f = costs[0];
        for (int i = 1; i < n; ++i) {
            vector<int> g = costs[i];
            for (int j = 0; j < k; ++j) {
                int t = INT_MAX;
                for (int h = 0; h < k; ++h) {
                    if (h != j) {
                        t = min(t, f[h]);
                    }
                }
                g[j] += t;
            }
            f = move(g);
        }
        return *min_element(f.begin(), f.end());
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func minCostII(costs [][]int) int {
	n, k := len(costs), len(costs[0])
	f := cp(costs[0])
	for i := 1; i < n; i++ {
		g := cp(costs[i])
		for j := 0; j < k; j++ {
			t := math.MaxInt32
			for h := 0; h < k; h++ {
				if h != j && t > f[h] {
					t = f[h]
				}
			}
			g[j] += t
		}
		f = g
	}
	return slices.Min(f)
}

func cp(arr []int) []int {
	t := make([]int, len(arr))
	copy(t, arr)
	return t
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
