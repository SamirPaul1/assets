---
title: Sequential Digits
summary: Sequential Digits - Solution Explained
url: "/posts/sequential-digits"
date: 2020-10-02T05:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Sequential Digits LeetCode Solution Explained in all languages", "1291", "leetcode question 1291", "Sequential Digits", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/sequential-digits.webp
    alt: Sequential Digits - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1291. Sequential Digits](https://leetcode.com/problems/sequential-digits)


## Description

<p>An&nbsp;integer has <em>sequential digits</em> if and only if each digit in the number is one more than the previous digit.</p>

<p>Return a <strong>sorted</strong> list of all the integers&nbsp;in the range <code>[low, high]</code>&nbsp;inclusive that have sequential digits.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> low = 100, high = 300
<strong>Output:</strong> [123,234]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> low = 1000, high = 13000
<strong>Output:</strong> [1234,2345,3456,4567,5678,6789,12345]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>10 &lt;= low &lt;= high &lt;= 10^9</code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans = []
        for i in range(1, 9):
            x = i
            for j in range(i + 1, 10):
                x = x * 10 + j
                if low <= x <= high:
                    ans.append(x)
        return sorted(ans)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> ans = new ArrayList<>();
        for (int i = 1; i < 9; ++i) {
            int x = i;
            for (int j = i + 1; j < 10; ++j) {
                x = x * 10 + j;
                if (x >= low && x <= high) {
                    ans.add(x);
                }
            }
        }
        Collections.sort(ans);
        return ans;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int i = 1; i < 9; ++i) {
            int x = i;
            for (int j = i + 1; j < 10; ++j) {
                x = x * 10 + j;
                if (x >= low && x <= high) {
                    ans.push_back(x);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func sequentialDigits(low int, high int) (ans []int) {
	for i := 1; i < 9; i++ {
		x := i
		for j := i + 1; j < 10; j++ {
			x = x*10 + j
			if low <= x && x <= high {
				ans = append(ans, x)
			}
		}
	}
	sort.Ints(ans)
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function sequentialDigits(low: number, high: number): number[] {
    const ans: number[] = [];
    for (let i = 1; i < 9; ++i) {
        let x = i;
        for (let j = i + 1; j < 10; ++j) {
            x = x * 10 + j;
            if (x >= low && x <= high) {
                ans.push(x);
            }
        }
    }
    ans.sort((a, b) => a - b);
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
