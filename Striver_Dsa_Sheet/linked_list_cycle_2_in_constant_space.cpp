/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        if (head == nullptr || head->next == nullptr) {
    return nullptr; // No cycle in an empty or single-node list
}
       ListNode* slow = head;
       ListNode* fast = head;
    ListNode* temp = head;

       while(fast->next !=NULL && fast->next->next !=NULL){

           fast  = fast->next->next;
           slow =slow->next;
        

           if(fast == slow){
               while(temp !=slow){
                   temp = temp->next;
                   slow= slow->next;
               }

               return temp;

           }
       }

       return NULL;
    }
};
