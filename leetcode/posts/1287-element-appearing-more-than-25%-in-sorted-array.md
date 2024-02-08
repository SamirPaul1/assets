---
title: 1287 Element Appearing More Than 25% In Sorted Array
summary: 1287 Element Appearing More Than 25% In Sorted Array LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["1287 Element Appearing More Than 25% In Sorted Array LeetCode Solution Explained in all languages", "1287 Element Appearing More Than 25% In Sorted Array", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:1287 Element Appearing More Than 25% In Sorted Array - Solution Explained/problem-solving.webp
    alt: 1287 Element Appearing More Than 25% In Sorted Array
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [1287. Element Appearing More Than 25% In Sorted Array](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array)


## Description

<p>Given an integer array <strong>sorted</strong> in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,2,6,6,6,6,7,10]
<strong>Output:</strong> 6
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;= 10<sup>5</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        for i, val in enumerate(arr):
            if val == arr[i + (n >> 2)]:
                return val
        return 0
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int findSpecialInteger(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == arr[i + (n >> 2)]) {
                return arr[i];
            }
        }
        return 0;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; ++i)
            if (arr[i] == arr[i + (n >> 2)]) return arr[i];
        return 0;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func findSpecialInteger(arr []int) int {
	n := len(arr)
	for i, val := range arr {
		if val == arr[i+(n>>2)] {
			return val
		}
	}
	return 0
}
```
{{< /terminal >}}

{{< terminal title="JavaScript Code" >}}
```js
/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function (arr) {
    const n = arr.length;
    for (let i = 0; i < n; ++i) {
        if (arr[i] == arr[i + (n >> 2)]) {
            return arr[i];
        }
    }
    return 0;
};
```
{{< /terminal >}}

{{< terminal title="PHP Code" >}}
```php
class Solution {
    /**
     * @param Integer[] $arr
     * @return Integer
     */
    function findSpecialInteger($arr) {
        $len = count($arr);
        for ($i = 0; $i < $len; $i++) {
            if ($arr[$i] == $arr[$i + ($len >> 2)]) {
                return $arr[$i];
            }
        }
        return -1;
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
