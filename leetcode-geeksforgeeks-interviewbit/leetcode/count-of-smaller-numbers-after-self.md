---
title: Count Of Smaller Numbers After Self
summary: Count Of Smaller Numbers After Self LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/count-of-smaller-numbers-after-self", "/blog/posts/count-of-smaller-numbers-after-self", "/count-of-smaller-numbers-after-self"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, count-of-smaller-numbers-after-self solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Count Of Smaller Numbers After Self/problem-solving.webp
    alt: Count Of Smaller Numbers After Self
    hiddenInList: true
    hiddenInSingle: false
---


<h2>315. Count of Smaller Numbers After Self</h2><h3>Hard</h3><hr><div><p>You are given an integer array <code>nums</code> and you have to return a new <code>counts</code> array. The <code>counts</code> array has the property where <code>counts[i]</code> is the number of smaller elements to the right of <code>nums[i]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [5,2,6,1]
<strong>Output:</strong> [2,1,1,0]
<strong>Explanation:</strong>
To the right of 5 there are <b>2</b> smaller elements (2 and 1).
To the right of 2 there is only <b>1</b> smaller element (1).
To the right of 6 there is <b>1</b> smaller element (1).
To the right of 1 there is <b>0</b> smaller element.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-1]
<strong>Output:</strong> [0]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [-1,-1]
<strong>Output:</strong> [0,0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

---




```cpp
class Solution {
public:
    int arr[100005];
    
    void merge(vector<pair<int, int> >&v, int l, int mid, int r){
        int i=l;
        int j=mid;
        int c=0;
        vector<pair<int,int>> temp(r-l+1);
        int k=0;
        while(i<=mid-1 && j<=r){
            if(v[i].first>v[j].first){
                c++;
                temp[k++]=v[j++];
            }
            else{
                arr[v[i].second]+=c;
                temp[k++]=v[i++];
            }
        }
        while(i<=mid-1)
        {
            arr[v[i].second]+=c; //add the number of smaller elements
            temp[k++]=v[i++]; 
        }
        //add the remaining second array elements if left any
        while(j<=r)
        {
            temp[k++]=v[j++];
        }
        //change the pairs to make it in sorted order 
        for(int i=0;i<k;i++)
        {
            v[l++]=temp[i];
        }
        
    }
    
    void mergeSort(vector<pair<int, int> >&v, int l, int r){
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(v, l, mid);
            mergeSort(v, mid+1, r);
            
            merge(v, l, mid+1, r);
        }
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        vector<pair<int, int> > v;
        int n=nums.size();
        for(int i=0;i<n;i++)
            v.push_back({nums[i], i});
        mergeSort(v, 0, n-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++)
            ans[i]=arr[i];
        return ans;
    }
};
```
