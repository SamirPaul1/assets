---
title: Find The Frequency
summary: Find The Frequency - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Find-the-Frequency", "/blog/posts/Find-the-Frequency", "/Find-the-Frequency", "/blog/Find-the-Frequency",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Find The Frequency solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Find The Frequency - Solution Explained/problem-solving.webp
    alt: Find The Frequency
    hiddenInList: true
    hiddenInSingle: false
---


# Find the Frequency
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a vector of <strong>N</strong> positive integers and an integer <strong>X</strong>. The task is to find the <strong>frequency </strong>of X in vector.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1: </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
vector = {1, 1, 1, 1, 1}
X = 1
<strong>Output: </strong>
5
<strong>Explanation: </strong>Frequency of 1 is 5.</span>
</pre>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
Your task is to complete the function <strong>findFrequency</strong>() which should count the frequency of X and return it.</span></p>
</div>

---




```cpp
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    // Your code here
    
    //Brute force approcah
    // int count = 0;
    // for(int i = 0 ; i < v.size(); i++) {
    //     if(v[i] == x)
    //     count++;
    // }
    // return count;
    
    //using map
    unordered_map<int, int>mp;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == x)
        mp[x]++;
    }
    if(mp.size() != 0) {
        return mp[x];
    }
    return 0;
}

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
```
