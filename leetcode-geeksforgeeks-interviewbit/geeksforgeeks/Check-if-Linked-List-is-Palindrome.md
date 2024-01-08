---
title: Check If Linked List Is Palindrome
summary: Check If Linked List Is Palindrome - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
aliases: ["/posts/Check-if-Linked-List-is-Palindrome", "/blog/posts/Check-if-Linked-List-is-Palindrome", "/Check-if-Linked-List-is-Palindrome", "/blog/Check-if-Linked-List-is-Palindrome",]
keywords: GeeksforGeeks, GeeksforGeeks solution in Python3 C++ Java, Check If Linked List Is Palindrome solution
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_70_bold:Check If Linked List Is Palindrome - Solution Explained/problem-solving.webp
    alt: Check If Linked List Is Palindrome
    hiddenInList: true
    hiddenInSingle: false
---


# Check if Linked List is Palindrome
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list of size <strong>N</strong> of integers. The task is to check if the given linked list is palindrome or not.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
value[] = {1,2,1}
<strong>Output: </strong>1<strong>
Explanation: </strong>The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
value[] = {1,2,3,4}
<strong>Output: </strong>0<strong>
Explanation: </strong>The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>isPalindrome</strong>() which takes head as reference as the only parameter and returns true or false if linked list is palindrome&nbsp;or not respectively.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N)<br>
<strong>Expected Auxialliary Space Usage</strong>: O(1)&nbsp; (ie, you should not use the recursive stack space as well)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>5</sup></span></p>
</div>

---




```cpp
//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* temp = head;
        stack<int>s;
        while(temp != NULL) {
            s.push(temp->data);
            temp = temp->next;
        }
        while(head != NULL) {
            int i = s.top();
            s.pop();
            if(head->data != i) {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
```
