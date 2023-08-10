//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

// } Driver Code Ends
//User function Template for C++

/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
    vector<int>ans;
       unordered_map<int,int>mp;
       int cnt=0,k=0;
       Node * tptr= head;
       Node * temp= head;
       while(tptr){ mp[tptr->data]++;cnt++; tptr=tptr->next;}
       for (auto x: mp){ if(x.second==1){k++;ans.push_back(x.first);}}
       sort(ans.begin(),ans.end());
       int newk=abs(cnt-k);
       Node * save;
     while(newk--)
    {
     temp= head;
     save=temp->next;
     head=save;
     delete temp;
    }
       if(ans.size()==0){head=NULL; return head;}
       else{
       tptr= head;
       int i=0;
       while(tptr) {tptr->data=ans[i]; i++; tptr=tptr->next;}
       return head;
       }
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}

// } Driver Code Ends