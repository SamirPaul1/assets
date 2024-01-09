---
title: Pascals Triangle
summary: Pascals Triangle LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "pascals-triangle LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Pascals Triangle - Solution Explained/problem-solving.webp
    alt: Pascals Triangle
    hiddenInList: true
    hiddenInSingle: false
---


<h2>118. Pascal's Triangle</h2><h3>Easy</h3><hr><div><p>Given an integer <code>numRows</code>, return the first numRows of <strong>Pascal's triangle</strong>.</p>

<p>In <strong>Pascal's triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height:240px; width:260px">
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> numRows = 5
<strong>Output:</strong> [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> numRows = 1
<strong>Output:</strong> [[1]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= numRows &lt;= 30</code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> ans;
        ans.push_back(1);
        vector<vector<int>> res;
        res.push_back(ans);
        for(int i=1;i<numRows;i++){
            vector<int> v(res[i-1]);
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++){
                temp.push_back(v[j-1]+v[j]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};
```
