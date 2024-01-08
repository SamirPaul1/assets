---
title: Count Good Meals
summary: Count Good Meals LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/count-good-meals", "/blog/posts/count-good-meals", "/count-good-meals"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, count-good-meals solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Count Good Meals/problem-solving.webp
    alt: Count Good Meals
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1711. Count Good Meals</h2><h3>Medium</h3><hr><div><p>A <strong>good meal</strong> is a meal that contains <strong>exactly two different food items</strong> with a sum of deliciousness equal to a power of two.</p>

<p>You can pick <strong>any</strong> two different foods to make a good meal.</p>

<p>Given an array of integers <code>deliciousness</code> where <code>deliciousness[i]</code> is the deliciousness of the <code>i<sup>​​​​​​th</sup>​​​​</code>​​​​ item of food, return <em>the number of different <strong>good meals</strong> you can make from this list modulo</em> <code>10<sup>9</sup> + 7</code>.</p>

<p>Note that items with different indices are considered different even if they have the same deliciousness value.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> deliciousness = [1,3,5,7,9]
<strong>Output:</strong> 4
<strong>Explanation: </strong>The good meals are (1,3), (1,7), (3,5) and, (7,9).
Their respective sums are 4, 8, 8, and 16, all of which are powers of 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> deliciousness = [1,1,1,3,3,3,7]
<strong>Output:</strong> 15
<strong>Explanation: </strong>The good meals are (1,1) with 3 ways, (1,3) with 9 ways, and (1,7) with 3 ways.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= deliciousness.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= deliciousness[i] &lt;= 2<sup>20</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int countPairs(vector<int>& d) {
        int n=d.size();
        int i=0,j=n-1,ans=0;
        map<int,int> m;
        int mod=1e9+7;
        for(auto &i: d){
                for(int j=0;j<=21;j++){
                    int p=1<<j;
                    if(m.find(p-i)!=m.end())
                        ans=(ans+m[p-i])%mod;
            }
            m[i]++;
        }
        return ans;
    }
};
```
