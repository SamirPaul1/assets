---
title: Count nodes of linked list   GFG
date: 2020-08-31 09:54:52
tags: geeksforgeeks
categories: geeksforgeeks
keywords: GeeksforGeeks, GeeksforGeeks practice solution in Python3 C++ Java, Count nodes of linked list - GFG solution
cover: assets/img/gfg.webp
---


# Count nodes of linked list
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong>Output: </strong>5<strong>
Explanation: </strong>Count of nodes in the 
linked list is 5, which is its length.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1-&gt;0
<strong>Output: </strong>7<strong>
Explanation: </strong>Count of nodes in the
linked list is 7. Hence, the output
is 7.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete the given function <strong>getCount</strong>(), which takes a head reference as an argument and should return the length of the linked list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(N)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= value &lt;= 10<sup>3</sup></span></p>

<p>&nbsp;</p>
</div>

---




```cpp
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count = 0;
        Node* current = head;
        while(current != NULL) {
            count++;
            current = current -> next;
        }
        return count;
    }
};
    


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}
// } Driver Code Ends
```
