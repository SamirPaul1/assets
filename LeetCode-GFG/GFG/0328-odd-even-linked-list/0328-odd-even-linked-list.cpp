/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oddHead = new ListNode(0); //virtual head
        ListNode *odd = oddHead;
        ListNode *evenHead = new ListNode(0); //virtual head
        ListNode *even = evenHead;
        ListNode *cur = head;
        int i = 1;
        
        while(cur){
            if(i % 2 == 1){
                odd->next = cur;
                odd = odd->next;
            }else{
                even->next = new ListNode(cur->val);
                even = even->next;
            }
            i++;
            cur = cur->next;
        }
        
        odd->next = evenHead->next;
        return oddHead->next; 
    }
};