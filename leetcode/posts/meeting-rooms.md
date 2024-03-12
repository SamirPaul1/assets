---
title: Meeting Rooms
summary: Meeting Rooms - Solution Explained
url: "/posts/meeting-rooms"
date: 2020-11-14T12:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Meeting Rooms LeetCode Solution Explained in all languages", "252", "leetcode question 252", "Meeting Rooms", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/meeting-rooms.webp
    alt: Meeting Rooms - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [252. Meeting Rooms](https://leetcode.com/problems/meeting-rooms)


## Description

<p>Given an array of meeting time <code>intervals</code>&nbsp;where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, determine if a person could attend all meetings.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> intervals = [[0,30],[5,10],[15,20]]
<strong>Output:</strong> false
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> intervals = [[7,10],[2,4]]
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;&nbsp;end<sub>i</sub> &lt;= 10<sup>6</sup></code></li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        intervals.sort()
        return all(a[1] <= b[0] for a, b in pairwise(intervals))
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public boolean canAttendMeetings(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        for (int i = 1; i < intervals.length; ++i) {
            var a = intervals[i - 1];
            var b = intervals[i];
            if (a[1] > b[0]) {
                return false;
            }
        }
        return true;
    }
}
```
{{< /terminal >}}

{{< terminal title="C++ Code" >}}
```cpp
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < intervals[i - 1][1]) {
                return false;
            }
        }
        return true;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func canAttendMeetings(intervals [][]int) bool {
	sort.Slice(intervals, func(i, j int) bool {
		return intervals[i][0] < intervals[j][0]
	})
	for i := 1; i < len(intervals); i++ {
		if intervals[i][0] < intervals[i-1][1] {
			return false
		}
	}
	return true
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function canAttendMeetings(intervals: number[][]): boolean {
    intervals.sort((a, b) => a[0] - b[0]);
    for (let i = 1; i < intervals.length; ++i) {
        if (intervals[i][0] < intervals[i - 1][1]) {
            return false;
        }
    }
    return true;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    #[allow(dead_code)]
    pub fn can_attend_meetings(intervals: Vec<Vec<i32>>) -> bool {
        if intervals.len() == 1 {
            return true;
        }

        let mut intervals = intervals;

        // Sort the intervals vector
        intervals.sort_by(|lhs, rhs| { lhs[0].cmp(&rhs[0]) });

        let mut end = -1;

        // Begin traverse
        for p in &intervals {
            if end == -1 {
                // This is the first pair
                end = p[1];
                continue;
            }
            if p[0] < end {
                return false;
            }
            end = p[1];
        }

        true
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
