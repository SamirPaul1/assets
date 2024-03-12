---
title: Number of Senior Citizens
summary: Number of Senior Citizens - Solution Explained
url: "/posts/number-of-senior-citizens"
date: 2020-08-05T10:00:00
tags: ["leetcode", "problem-solving"]
series: [leetcode]
keywords: ["Number of Senior Citizens LeetCode Solution Explained in all languages", "2678", "leetcode question 2678", "Number of Senior Citizens", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://spcdn.pages.dev/leetcode/images/number-of-senior-citizens.webp
    alt: Number of Senior Citizens - Solution Explained
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [2678. Number of Senior Citizens](https://leetcode.com/problems/number-of-senior-citizens)


## Description

<p>You are given a <strong>0-indexed</strong> array of strings <code>details</code>. Each element of <code>details</code> provides information about a given passenger compressed into a string of length <code>15</code>. The system is such that:</p>

<ul>
	<li>The first ten characters consist of the phone number of passengers.</li>
	<li>The next character denotes the gender of the person.</li>
	<li>The following two characters are used to indicate the age of the person.</li>
	<li>The last two characters determine the seat allotted to that person.</li>
</ul>

<p>Return <em>the number of passengers who are <strong>strictly </strong><strong>more than 60 years old</strong>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> details = [&quot;7868190130M7522&quot;,&quot;5303914400F9211&quot;,&quot;9273338290F4010&quot;]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> details = [&quot;1313579440F2036&quot;,&quot;2921522980M5644&quot;]
<strong>Output:</strong> 0
<strong>Explanation:</strong> None of the passengers are older than 60.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= details.length &lt;= 100</code></li>
	<li><code>details[i].length == 15</code></li>
	<li><code>details[i] consists of digits from &#39;0&#39; to &#39;9&#39;.</code></li>
	<li><code>details[i][10] is either &#39;M&#39; or &#39;F&#39; or &#39;O&#39;.</code></li>
	<li>The phone numbers and seat numbers of the passengers are distinct.</li>
</ul>

## Solutions

### Solution 1: Traversal and Counting

We can traverse each string $x$ in `details` and convert the $12$th and $13$th characters (indexed at $11$ and $12$) of $x$ to integers, and check if they are greater than $60$. If so, we add one to the answer.

After the traversal, we return the answer.

The time complexity is $O(n)$, where $n$ is the length of `details`. The space complexity is $O(1)`.

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def countSeniors(self, details: List[str]) -> int:
        return sum(int(x[11:13]) > 60 for x in details)
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    public int countSeniors(String[] details) {
        int ans = 0;
        for (var x : details) {
            int age = Integer.parseInt(x.substring(11, 13));
            if (age > 60) {
                ++ans;
            }
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
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for (auto& x : details) {
            int age = stoi(x.substr(11, 2));
            ans += age > 60;
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func countSeniors(details []string) (ans int) {
	for _, x := range details {
		age, _ := strconv.Atoi(x[11:13])
		if age > 60 {
			ans++
		}
	}
	return
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function countSeniors(details: string[]): number {
    let ans = 0;
    for (const x of details) {
        const age = parseInt(x.slice(11, 13));
        if (age > 60) {
            ++ans;
        }
    }
    return ans;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        let mut ans = 0;

        for s in details.iter() {
            if let Ok(age) = s[11..13].parse::<i32>() {
                if age > 60 {
                    ans += 1;
                }
            }
        }

        ans
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

### Solution 2

<!-- tabs:start -->

{{< terminal title="TypeScript Code" >}}
```ts
function countSeniors(details: string[]): number {
    return details.filter(v => parseInt(v.slice(11, 13)) > 60).length;
}
```
{{< /terminal >}}

{{< terminal title="Rust Code" >}}
```rust
impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        details
            .iter()
            .filter_map(|s| s[11..13].parse::<i32>().ok())
            .filter(|&age| age > 60)
            .count() as i32
    }
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
