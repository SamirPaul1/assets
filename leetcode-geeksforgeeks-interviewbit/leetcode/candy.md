---
title: Candy
summary: Candy LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/candy", "/blog/posts/candy", "/candy"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, candy solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Candy/problem-solving.webp
    alt: Candy
    hiddenInList: true
    hiddenInSingle: false
---


<h2>135. Candy</h2><h3>Hard</h3><hr><div><p>There are <em>N</em> children standing in a line. Each child is assigned a rating value.</p>

<p>You are giving candies to these children subjected to the following requirements:</p>

<ul>
	<li>Each child must have at least one candy.</li>
	<li>Children with a higher rating get more candies than their neighbors.</li>
</ul>

<p>What is the minimum candies you must give?</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> [1,0,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> [1,2,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
             The third child gets 1 candy because it satisfies the above two conditions.
</pre>
</div>

---




```cpp
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1)
            return 1;
        vector<int> l(n,1);
        vector<int> r(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                l[i]=l[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                r[i]=r[i+1]+1;
        }
        int s=0;
        for(int i=0;i<n;i++)
            s+=max(l[i],r[i]);
        return s;
    }
};
```
