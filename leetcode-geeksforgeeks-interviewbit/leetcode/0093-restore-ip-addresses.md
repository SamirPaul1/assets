---
title: 0093 Restore Ip Addresses
summary: 0093 Restore Ip Addresses LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/0093-restore-ip-addresses", "/blog/posts/0093-restore-ip-addresses", "/0093-restore-ip-addresses"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, 0093-restore-ip-addresses solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:0093 Restore Ip Addresses/problem-solving.webp
    alt: 0093 Restore Ip Addresses
    hiddenInList: true
    hiddenInSingle: false
---


<h2><a href="https://leetcode.com/problems/restore-ip-addresses/">93. Restore IP Addresses</a></h2><h3>Medium</h3><hr><div><p>A <strong>valid IP address</strong> consists of exactly four integers separated by single dots. Each integer is between <code>0</code> and <code>255</code> (<strong>inclusive</strong>) and cannot have leading zeros.</p>

<ul>
	<li>For example, <code>"0.1.2.201"</code> and <code>"192.168.1.1"</code> are <strong>valid</strong> IP addresses, but <code>"0.011.255.245"</code>, <code>"192.168.1.312"</code> and <code>"192.168@1.1"</code> are <strong>invalid</strong> IP addresses.</li>
</ul>

<p>Given a string <code>s</code> containing only digits, return <em>all possible valid IP addresses that can be formed by inserting dots into </em><code>s</code>. You are <strong>not</strong> allowed to reorder or remove any digits in <code>s</code>. You may return the valid IP addresses in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "25525511135"
<strong>Output:</strong> ["255.255.11.135","255.255.111.35"]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "0000"
<strong>Output:</strong> ["0.0.0.0"]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "101023"
<strong>Output:</strong> ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 20</code></li>
	<li><code>s</code> consists of digits only.</li>
</ul>
</div>

---




```python
class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        res = []
        def dfs(i, k, tmp):
            # print(tmp)
            if k >= 4 or i >= len(s):
                if i == len(s) and k == 4:
                    res.append(tmp[:-1])
                return
            
            if s[i] == '0':
                dfs(i+1, k+1, tmp + s[i] + '.')
            else:
                if i < len(s):
                    dfs(i+1, k+1, tmp + s[i] + '.')
                if i+1 <= len(s): 
                    dfs(i+2, k+1, tmp + s[i:i+2] + '.')
                if i+2 <= len(s) and s[i:i+3] <= '255': 
                    dfs(i+3, k+1, tmp + s[i:i+3] + '.')
        
        dfs(0, 0, "")
        return res
```
