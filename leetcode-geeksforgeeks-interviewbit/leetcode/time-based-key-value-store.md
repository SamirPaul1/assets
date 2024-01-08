---
title: Time Based Key Value Store
summary: Time Based Key Value Store LeetCode Solution Explained
date: 2020-06-20
tags: [leetcode]
series: [leetcode]
aliases: ["/posts/time-based-key-value-store", "/blog/posts/time-based-key-value-store", "/time-based-key-value-store"]
keywords: LeetCode, leetcode solution in Python3 C++ Java, time-based-key-value-store solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Time Based Key Value Store/problem-solving.webp
    alt: Time Based Key Value Store
    hiddenInList: true
    hiddenInSingle: false
---




---




```cpp
class TimeMap {
public:
    /** Initialize your data structure here. */
    unordered_map<string, map<int, string>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it=m[key].upper_bound(timestamp);
        return (it==m[key].begin())?"":prev(it)->second;
    }
};
​
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

```
