---
title: Encode And Decode Tinyurl
summary: Encode And Decode Tinyurl LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
keywords: ["LeetCode", "leetcode solution in Python3 C++ Java", "encode-and-decode-tinyurl LeetCode Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Encode And Decode Tinyurl - Solution Explained/problem-solving.webp
    alt: Encode And Decode Tinyurl
    hiddenInList: true
    hiddenInSingle: false
---


[Discussion Post (created on 19/1/2021 at 0:54)](https://leetcode.com/problems/encode-and-decode-tinyurl/discuss/1071815/C%2B%2B-or-Map)  
<h2>535. Encode and Decode TinyURL</h2><h3>Medium</h3><hr><div><blockquote>Note: This is a companion problem to the <a href="https://leetcode.com/discuss/interview-question/system-design/" target="_blank">System Design</a> problem: <a href="https://leetcode.com/discuss/interview-question/124658/Design-a-URL-Shortener-(-TinyURL-)-System/" target="_blank">Design TinyURL</a>.</blockquote>

<p>TinyURL is a URL shortening service where you enter a URL such as <code>https://leetcode.com/problems/design-tinyurl</code> and it returns a short URL such as <code>http://tinyurl.com/4e9iAk</code>.</p>

<p>Design the <code>encode</code> and <code>decode</code> methods for the TinyURL service. There is no restriction on how your encode/decode algorithm should work. You just need to ensure that a URL can be encoded to a tiny URL and the tiny URL can be decoded to the original URL.</p>
</div>

---




```cpp
class Solution {
public:
    string s="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int id = 0;
    map<string, string> url;
    
    string solve(int n){
        string ans;
        if(n<62){
            return s.substr(0, s[n]);
        }
        while(n>0){
            ans+=s[n%62];
            n=n/62;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s=solve(id);
        id++;
        url[s]=longUrl;
        return "http://tinyurl.com/" + s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int ind=shortUrl.size()-1;
        while(shortUrl[ind]!='/')
            ind--;
        string s=shortUrl.substr(ind+1);
        return url[s];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
```
