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
        if (!head) {
           return head;
       }

       ListNode* end = head;
       int len = 0;

       while (end->next != nullptr) {
           end = end->next;
           len++;
       }

       ListNode* temp = head;

       len = len&1?(len/2)+1:len/2;
        cout<<len;
       
       while (len--) {
           end->next = temp->next;
           temp->next = temp->next->next;
           end->next->next = nullptr;
           temp = temp->next;
           end = end->next;
       }

       return head;
    }
};
