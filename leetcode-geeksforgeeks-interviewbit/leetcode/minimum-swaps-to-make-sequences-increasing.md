---
title: Minimum Swaps To Make Sequences Increasing
summary: Minimum Swaps To Make Sequences Increasing LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/minimum-swaps-to-make-sequences-increasing", "/blog/posts/minimum-swaps-to-make-sequences-increasing", "/minimum-swaps-to-make-sequences-increasing"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, minimum-swaps-to-make-sequences-increasing solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Minimum Swaps To Make Sequences Increasing/problem-solving.webp
    alt: Minimum Swaps To Make Sequences Increasing
    hiddenInList: true
    hiddenInSingle: false
---


<h2>801. Minimum Swaps To Make Sequences Increasing</h2><h3>Medium</h3><hr><div><p>We have two integer sequences <code>A</code> and <code>B</code> of the same non-zero length.</p>

<p>We are allowed to swap elements <code>A[i]</code> and <code>B[i]</code>.&nbsp; Note that both elements are in the same index position in their respective sequences.</p>

<p>At the end of some number of swaps, <code>A</code> and <code>B</code> are both strictly increasing.&nbsp; (A sequence is <em>strictly increasing</em> if and only if <code>A[0] &lt; A[1] &lt; A[2] &lt; ... &lt; A[A.length - 1]</code>.)</p>

<p>Given A and B, return the minimum number of swaps to make both sequences strictly increasing.&nbsp; It is guaranteed that the given input always makes it possible.</p>

<pre><strong>Example:</strong>
<strong>Input:</strong> A = [1,3,5,4], B = [1,2,3,7]
<strong>Output:</strong> 1
<strong>Explanation: </strong>
Swap A[3] and B[3].  Then the sequences are:
A = [1, 3, 5, 7] and B = [1, 2, 3, 4]
which are both strictly increasing.
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>A, B</code> are arrays with the same length, and that length will be in the range <code>[1, 1000]</code>.</li>
	<li><code>A[i], B[i]</code> are integer values in the range <code>[0, 2000]</code>.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
 
    int minSwap(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int swap=0,noswap=1;
        
        for(int i=1;i<n;i++){
            int x=INT_MAX, y=INT_MAX;
            if(A[i]>B[i-1] && B[i]>A[i-1]){
                x=min(x, noswap);
                y=min(y, swap+1);
            }
            if(A[i]>A[i-1] && B[i]>B[i-1]){
                x=min(x, swap);
                y=min(y, noswap+1);
            }
            swap=x;
            noswap=y;
        }
        return min(swap,noswap);
        
    }
};

```
