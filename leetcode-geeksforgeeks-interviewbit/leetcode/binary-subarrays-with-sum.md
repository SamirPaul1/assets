---
title: Binary Subarrays With Sum
summary: Binary Subarrays With Sum LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "binary-subarrays-with-sum LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Binary Subarrays With Sum - Solution Explained/problem-solving.webp
    alt: Binary Subarrays With Sum
    hiddenInList: true
    hiddenInSingle: false
---


<h2>930. Binary Subarrays With Sum</h2><h3>Medium</h3><hr><div><p>In an array <code>A</code> of <code>0</code>s and <code>1</code>s, how many <strong>non-empty</strong> subarrays have sum <code>S</code>?</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>A = <span id="example-input-1-1">[1,0,1,0,1]</span>, S = <span id="example-input-1-2">2</span>
<strong>Output: </strong><span id="example-output-1">4</span>
<strong>Explanation: </strong>
The 4 subarrays are bolded below:
[<strong>1,0,1</strong>,0,1]
[<strong>1,0,1,0</strong>,1]
[1,<strong>0,1,0,1</strong>]
[1,0,<strong>1,0,1</strong>]
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>A.length &lt;= 30000</code></li>
	<li><code>0 &lt;= S &lt;= A.length</code></li>
	<li><code>A[i]</code>&nbsp;is either <code>0</code>&nbsp;or <code>1</code>.</li>
</ol></div>

---




```cpp
class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
        int pre[A.size()+1];
        int ans=0,s=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0;i<A.size();i++){
            s+=A[i];
            int k=s-S;
            ans+=m[k];
            m[s]++;
        }
        return ans;
    }
};
```
