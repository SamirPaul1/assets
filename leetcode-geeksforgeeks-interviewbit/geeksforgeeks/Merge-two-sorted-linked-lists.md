---
title: Merge Two Sorted Linked Lists
summary: Merge Two Sorted Linked Lists - GeeksforGeeks Solution Explained
date: 2020-06-20
tags: [geeksforgeeks]
series: [GeeksforGeeks]
keywords: ["GeeksforGeeks", "GeeksforGeeks solution in Python3 C++ Java", "Merge Two Sorted Linked Lists Solution Explained"]
cover:
    image: https://res.cloudinary.com/samirpaul/image/upload/w_1100,c_fit,co_rgb:FFFFFF,l_text:Arial_75_bold:Merge Two Sorted Linked Lists - Solution Explained/problem-solving.webp
    alt: Merge Two Sorted Linked Lists
    hiddenInList: true
    hiddenInSingle: false
---


# Merge two sorted linked lists
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two sorted linked lists consisting of <strong>N and M</strong>&nbsp;nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
<strong>Output: </strong>2 3 5 10 15 20 40<strong>
Explanation: </strong>After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
<strong>Output:</strong>1 1 2 4<strong>
Explanation: </strong>After merging the given two
linked list , we have 1, 1, 2, 4 as
output.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>sortedMerge</strong>() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(n+m)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M &lt;= 10<sup>4</sup><br>
0 &lt;= Node's data &lt;= 10<sup>5</sup></span></p>
</div>

---




```cpp
//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    
    Node* dummyNode = new Node(0);
    Node* current = dummyNode;
    
    while(head1 != NULL && head2 != NULL) {
        if(head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        }else {
            current->next = head2;
            head2 = head2->next;
        }
        
        current = current->next;
        
    }
    
    if(head1 != NULL) {
        current->next = head1;
    }
    
    if(head2 != NULL) {
        current->next = head2;
    }
    
    return dummyNode->next;
}  
```
