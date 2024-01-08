---
title: Minimum Characters Required To Make A String Palindromic
summary: Minimum Characters Required To Make A String Palindromic - Interviewbit Solution Explained
date: 2020-06-20
tags: [interviewbit]
series: [interviewbit]
keywords: [interviewbit, interviewbit solution in Python3 C++ Java, Minimum Characters Required To Make A String Palindromic solution]
aliases: ["/posts/minimum-characters-required-to-make-a-string-palindromic", "/blog/posts/minimum-characters-required-to-make-a-string-palindromic", "/minimum-characters-required-to-make-a-string-palindromic"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Minimum Characters Required To Make A String Palindromic - Solution Explained/problem-solving.webp
    alt: Minimum Characters Required To Make A String Palindromic
    hiddenInList: true
    hiddenInSingle: false
---

# Minimum Characters Required To Make a String Palindromic

https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic


You are given a string. The only operation allowed is to insert characters in the beginning of the string.
How many minimum characters are needed to be inserted to make the string a palindrome string

editorial:
## Solution

```cpp

int Solution::solve(string A) {
	int start = 0, end = A.length() - 1;
	int temp_end = end;

	/*Idea is to find longest palindrome length starting from index 0.
    Difference of this length from string length is the required value */

	while (start <= temp_end) {
		if (A[start] == A[temp_end]) {
			start++;
			temp_end--;
		} else {
			start = 0;
			temp_end = --end;
		}
	}

	return A.length() - (end + 1);
}

/* --- */

bool ispalindrome(string s) {
	int l = s.length();
	for (int i = 0, j = l - 1; i <= j; i++, j--)
		if (s[i] != s[j])
			return false;
	return true;
}

int Solution::solve(string s) {
	int cnt = 0;
	while (s.length() > 0) {
		if (ispalindrome(s))
			break;
		else {
			s.erase(s.begin() + s.length() - 1);
			cnt++;
		}
	}
	return cnt;
}
```