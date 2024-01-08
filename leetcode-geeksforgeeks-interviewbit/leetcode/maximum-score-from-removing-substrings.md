---
title: Maximum Score From Removing Substrings
summary: Maximum Score From Removing Substrings LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/maximum-score-from-removing-substrings", "/blog/posts/maximum-score-from-removing-substrings", "/maximum-score-from-removing-substrings"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, maximum-score-from-removing-substrings solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Maximum Score From Removing Substrings/problem-solving.webp
    alt: Maximum Score From Removing Substrings
    hiddenInList: true
    hiddenInSingle: false
---


<h2>1717. Maximum Score From Removing Substrings</h2><h3>Medium</h3><hr><div><p>You are given a string <code>s</code> and two integers <code>x</code> and <code>y</code>. You can perform two types of operations any number of times.</p>

<ul>
	<li>Remove substring <code>"ab"</code> and gain <code>x</code> points.

	<ul>
		<li>For example, when removing <code>"ab"</code> from <code>"c<u>ab</u>xbae"</code> it becomes <code>"cxbae"</code>.</li>
	</ul>
	</li>
	<li>Remove substring <code>"ba"</code> and gain <code>y</code> points.
	<ul>
		<li>For example, when removing <code>"ba"</code> from <code>"cabx<u>ba</u>e"</code> it becomes <code>"cabxe"</code>.</li>
	</ul>
	</li>
</ul>

<p>Return <em>the maximum points you can gain after applying the above operations on</em> <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "cdbcbbaaabab", x = 4, y = 5
<strong>Output:</strong> 19
<strong>Explanation:</strong>
- Remove the "ba" underlined in "cdbcbbaaa<u>ba</u>b". Now, s = "cdbcbbaaab" and 5 points are added to the score.
- Remove the "ab" underlined in "cdbcbbaa<u>ab</u>". Now, s = "cdbcbbaa" and 4 points are added to the score.
- Remove the "ba" underlined in "cdbcb<u>ba</u>a". Now, s = "cdbcba" and 5 points are added to the score.
- Remove the "ba" underlined in "cdbc<u>ba</u>". Now, s = "cdbc" and 5 points are added to the score.
Total score = 5 + 4 + 5 + 5 = 19.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aabbaaxybbaabb", x = 5, y = 4
<strong>Output:</strong> 20
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= x, y &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>
</div>

---




```cpp
class Solution {
public:
    
    int solve(string &s, char a, char b){
        stack<char> st;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()==a && s[i]==b){
                    st.pop();
                    ans++;
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string str;
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        s=str;
        return ans;
    }
    
    int maximumGain(string s, int x, int y) {
        int n=s.size();
        int xx,yy;
        if(x>y){
            xx=solve(s, 'a', 'b');
            yy=solve(s, 'b', 'a');
        }
        else{
            yy=solve(s, 'b', 'a');
            xx=solve(s, 'a', 'b');
        }
        return xx*x+yy*y;
    }
};
```
