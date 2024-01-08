---
title: Largest Rectangle In Histogram
summary: Largest Rectangle In Histogram LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/largest-rectangle-in-histogram", "/blog/posts/largest-rectangle-in-histogram", "/largest-rectangle-in-histogram"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, largest-rectangle-in-histogram solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Largest Rectangle In Histogram/problem-solving.webp
    alt: Largest Rectangle In Histogram
    hiddenInList: true
    hiddenInSingle: false
---


<h2>84. Largest Rectangle in Histogram</h2><h3>Hard</h3><hr><div><p>Given an array of integers <code>heights</code> representing the histogram's bar height where the width of each bar is <code>1</code>, return <em>the area of the largest rectangle in the histogram</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/histogram.jpg" style="width: 522px; height: 242px;">
<pre><strong>Input:</strong> heights = [2,1,5,6,2,3]
<strong>Output:</strong> 10
<strong>Explanation:</strong> The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/histogram-1.jpg" style="width: 202px; height: 362px;">
<pre><strong>Input:</strong> heights = [2,4]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= heights.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= heights[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    //VERY IMP: atleast one bar is fully included in the largest rectangle
    
    // If largest rectangle contains atleast one bar full then if we consideer largest of all areas containing every bar fully we get our answer
    
    //find nearest left bar with height < curr bar and do same for right.
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        int l[n], r[n];
        stack<int> s;
        for(int i=0;i<n;i++){
            if(s.empty())
                l[i]=0;
            else{
                while(!s.empty() && h[s.top()]>=h[i])
                    s.pop();
                if(s.empty())
                    l[i]=0;
                else
                    l[i]=s.top()+1;
            }
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        for(int i=n-1;i>=0;i--){
            if(s.empty())
                r[i]=n-1;
            else{
                while(!s.empty() && h[s.top()]>=h[i])
                    s.pop();
                if(s.empty())
                    r[i]=n-1;
                else
                    r[i]=s.top()-1;
            }
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans, h[i]*(r[i]-l[i]+1));
        }
        return ans;
    }
};
```
