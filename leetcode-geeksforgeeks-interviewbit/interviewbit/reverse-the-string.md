---
title: Reverse The String
summary: Reverse The String - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Reverse The String solution]
aliases: ["/posts/reverse-the-string", "/blog/posts/reverse-the-string", "/reverse-the-string"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Reverse The String - Solution Explained/problem-solving.webp
    alt: Reverse The String
    hiddenInList: true
    hiddenInSingle: false
---

# Reverse The String

https://www.interviewbit.com/problems/reverse-the-string

## Solution

### Mine

```cpp
void Solution::reverseWords(string &A) {
	stringstream ss(A);
	string word, res;
	while (ss.good()) {
		ss >> word;
		if (!res.empty())
			word += " ";
		res = word + res;
	}
	A = res;
}
```
### Editorial

```cpp
void Solution::reverseWords(string &a) {
	int n = a.size();
	int i = 0, in = 0;
	while (i < n) {
		int start;
		if (a[i] != ' ') {
			start = i;
			int end = start;
			i++;
			while (i < n && a[i] != ' ') {
				end++;
				i++;
			}
			while (start <= end) {
				char temp = a[start];
				a[start] = a[end];
				a[end] = temp;
				start++;
				end--;
			}

		} else
			i++;
	}
	//cout << a << endl;
	int start = 0, end = n - 1;
	while (start < end) {
		char temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	i = 0;
	while (i < n) {
		while (i < n && a[i] == ' ')
			i++;
		if (i != n && in != 0)
			a[in++] = ' ';
		while (i < n && a[i] != ' ') {
			a[in] = a[i];
			in++;
			i++;
		}
	}
	a.erase(a.begin() + in, a.end());
}
```
