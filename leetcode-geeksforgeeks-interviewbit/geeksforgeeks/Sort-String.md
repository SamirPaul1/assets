---
title: Sort String
summary: Sort String - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Sort-String", "/blog/posts/Sort-String", "/Sort-String", "/blog/Sort-String",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Sort String solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Sort String - Solution Explained/problem-solving.webp
    alt: Sort String
    hiddenInList: true
    hiddenInSingle: false
---


# Sort String
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.</span></p>

<p><span style="font-size:20px"><strong>Input:</strong><br>
The first line contains an integer T, denoting number of test cases. Then T test case follows. First line of each test case contains a string S each.<br>
<br>
<strong>Output:</strong><br>
For each test case, print the string S in sorted order.<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100</span><br>
<span style="font-size:20px">1&lt;=|S|&lt;=4*10^4</span><br>
<span style="font-size:20px">String S will contains lowercase character from 'a'-'z<br>
<br>
<strong>Example:</strong></span><br>
<span style="font-size:20px"><strong>Input:</strong><br>
2<br>
bbccdefbbaa </span><br>
<span style="font-size:20px">geeksforgeeks</span><br>
<span style="font-size:20px"><strong>Output :</strong></span><br>
<span style="font-size:20px">aabbbbccdef<br>
eeeefggkkorss</span></p>
</div>

---




```cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//cout<<"I am a Software Engineer"<<endl;
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    sort(s.begin(), s.end());
	    cout << s << endl;
	}
	return 0;
}
```
