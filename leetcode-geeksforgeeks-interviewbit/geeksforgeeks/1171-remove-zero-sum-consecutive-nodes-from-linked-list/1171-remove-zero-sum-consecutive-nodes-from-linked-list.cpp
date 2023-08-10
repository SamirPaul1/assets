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
ListNode *make_list(vector<int> v){
   ListNode *head = new ListNode(v[0]);
   for(int i = 1; i<v.size(); i++){
      ListNode *ptr = head;
      while(ptr->next != NULL){
         ptr = ptr->next;
      }
      ptr->next = new ListNode(v[i]);
   }
   return head;
}
void print_list(ListNode *head){
   ListNode *ptr = head;
   cout << "[";
   while(ptr){
      cout << ptr->val << ", ";
      ptr = ptr->next;
   }
   cout << "]" << endl;
}
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
      ListNode* dummy = new ListNode(0);
      dummy->next = head;
      unordered_map <int, ListNode*> m;
      m[0] = dummy;
      int sum = 0;
      while(head){
         sum += head->val;
         m[sum] = head;
         head = head->next;
      }
      head = dummy;
      sum = 0;
      while(head){
         sum += head->val;
         ListNode* temp = m[sum];
         if(temp != head){
            head->next = temp->next;
         }
         head = head->next;
      }
      return dummy->next;  
    }
};