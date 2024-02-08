---
title: 0372 Super Pow
summary: 0372 Super Pow LeetCode Solution Explained
date: 2022-11-25
tags: [leetcode]
series: [leetcode]
keywords: ["0372 Super Pow LeetCode Solution Explained in all languages", "0372 Super Pow", "LeetCode", "leetcode solution in Python3 C++ Java Go PHP Ruby Swift TypeScript Rust C# JavaScript C", "GeeksforGeeks", "InterviewBit", "Coding Ninjas", "HackerRank", "HackerEarth", "CodeChef", "TopCoder", "AlgoExpert", "freeCodeCamp", "Codeforces", "GitHub", "AtCoder", "Samir Paul"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:0372 Super Pow - Solution Explained/problem-solving.webp
    alt: 0372 Super Pow
    hiddenInList: true
    hiddenInSingle: false
math: true
---


# [372. Super Pow](https://leetcode.com/problems/super-pow)


## Description

<p>Your task is to calculate <code>a<sup>b</sup></code> mod <code>1337</code> where <code>a</code> is a positive integer and <code>b</code> is an extremely large positive integer given in the form of an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> a = 2, b = [3]
<strong>Output:</strong> 8
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> a = 2, b = [1,0]
<strong>Output:</strong> 1024
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> a = 1, b = [4,3,3,8,5,2]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>1 &lt;= b.length &lt;= 2000</code></li>
	<li><code>0 &lt;= b[i] &lt;= 9</code></li>
	<li><code>b</code> does not contain leading zeros.</li>
</ul>

## Solutions

### Solution 1

<!-- tabs:start -->

{{< terminal title="Python Code" >}}
```python
class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        mod = 1337
        ans = 1
        for e in b[::-1]:
            ans = ans * pow(a, e, mod) % mod
            a = pow(a, 10, mod)
        return ans
```
{{< /terminal >}}

{{< terminal title="Java Code" >}}
```java
class Solution {
    private final int mod = 1337;

    public int superPow(int a, int[] b) {
        long ans = 1;
        for (int i = b.length - 1; i >= 0; --i) {
            ans = ans * qpow(a, b[i]) % mod;
            a = qpow(a, 10);
        }
        return (int) ans;
    }

    private long qpow(long a, int n) {
        long ans = 1;
        for (; n > 0; n >>= 1) {
            if ((n & 1) == 1) {
                ans = ans * a % mod;
            }
            a = a * a % mod;
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
    int superPow(int a, vector<int>& b) {
        using ll = long long;
        const int mod = 1337;
        ll ans = 1;
        auto qpow = [&](ll a, int n) {
            ll ans = 1;
            for (; n; n >>= 1) {
                if (n & 1) {
                    ans = ans * a % mod;
                }
                a = a * a % mod;
            }
            return (int) ans;
        };
        for (int i = b.size() - 1; ~i; --i) {
            ans = ans * qpow(a, b[i]) % mod;
            a = qpow(a, 10);
        }
        return ans;
    }
};
```
{{< /terminal >}}

{{< terminal title="Go Code" >}}
```go
func superPow(a int, b []int) int {
	const mod int = 1337
	ans := 1
	qpow := func(a, n int) int {
		ans := 1
		for ; n > 0; n >>= 1 {
			if n&1 == 1 {
				ans = ans * a % mod
			}
			a = a * a % mod
		}
		return ans
	}
	for i := len(b) - 1; i >= 0; i-- {
		ans = ans * qpow(a, b[i]) % mod
		a = qpow(a, 10)
	}
	return ans
}
```
{{< /terminal >}}

{{< terminal title="TypeScript Code" >}}
```ts
function superPow(a: number, b: number[]): number {
    let ans = 1;
    const mod = 1337;
    const qpow = (a: number, n: number): number => {
        let ans = 1;
        for (; n; n >>= 1) {
            if (n & 1) {
                ans = Number((BigInt(ans) * BigInt(a)) % BigInt(mod));
            }
            a = Number((BigInt(a) * BigInt(a)) % BigInt(mod));
        }
        return ans;
    };
    for (let i = b.length - 1; ~i; --i) {
        ans = Number((BigInt(ans) * BigInt(qpow(a, b[i]))) % BigInt(mod));
        a = qpow(a, 10);
    }
    return ans;
}
```
{{< /terminal >}}

<!-- tabs:end -->

<!-- end -->
