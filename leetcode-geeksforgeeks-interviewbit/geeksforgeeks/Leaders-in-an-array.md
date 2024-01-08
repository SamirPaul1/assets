---
title: Leaders In An Array
summary: Leaders In An Array - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Leaders-in-an-array", "/blog/posts/Leaders-in-an-array", "/Leaders-in-an-array", "/blog/Leaders-in-an-array",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Leaders In An Array solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Leaders In An Array - Solution Explained/problem-solving.webp
    alt: Leaders In An Array
    hiddenInList: true
    hiddenInSingle: false
---


# Leaders in an array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array A of positive integers. Your task is to find the leaders in the array.&nbsp;An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 6
A[] = {16,17,4,3,5,2}
<strong>Output: </strong>17 5 2<strong>
Explanation: </strong>The first leader is 17 
as it is greater than all the elements
to its right.&nbsp; Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5
A[] = {1,2,3,4,0}
<strong>Output: </strong>4 0
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>leader</strong>() which takes array A and n&nbsp;as input parameters and&nbsp;returns an array of leaders in order of their appearance.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong></span><span style="font-size:18px">&nbsp;O(n)</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n&nbsp;&lt;= 10<sup>7</sup><br>
0 &lt;= A<sub>i</sub> &lt;= 10<sup>7</sup></span></p>
</div>

---




```cpp
//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int res = a[n-1],i;
        ans.push_back(res);
        for(int i = n-2; i >= 0; i--) {
            res = max(res, a[i]);
            if(res == a[i])
            ans.push_back(a[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends
```
