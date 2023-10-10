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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next ==NULL){
            return NULL;
        }
    int index = 0;

    ListNode* temp = head;

    while(temp!=NULL){
        index++;
        temp= temp->next;
    }

    int pos = index - n;
    if(pos == 0){
        ListNode *newHead = head->next;
        return newHead;
    }
    index = 1;
    temp=head;      
    while(index<pos){
    temp = temp->next;
    index++;
    }
    
    temp->next = temp->next->next;

    return head;
    }
};
