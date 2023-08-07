---
title: Reverse an Array   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Reverse an Array - GFG solution
cover: assets/img/gfg.webp
---


# Reverse an Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>A</strong> of size <strong>N</strong>, print the reverse of it.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
1
4
1 2 3 4</span>
<span style="font-size:18px"><strong>Output:</strong>
4 3 2 1</span></pre>

<p><span style="font-size:18px"><strong>Input:</strong></span><br>
<span style="font-size:18px">First line contains an integer denoting the test cases <strong>'T'</strong>. T testcases follow. Each testcase contains two lines of input. First line contains <strong>N</strong> the size of the array <strong>A</strong>. The second line contains the elements of the array.</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
For each testcase, in a new line, print the array in reverse order. </span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100</span><br>
<span style="font-size:18px">1 &lt;= N &lt;=100</span><br>
<span style="font-size:18px">0 &lt;= A<sub>i</sub> &lt;= 100</span></p>

<p>&nbsp;</p>
</div>

---




```cpp
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    for(int i = n - 1; i >= 0; i--) {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
```
