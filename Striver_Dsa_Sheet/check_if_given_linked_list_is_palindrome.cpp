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

    ListNode* reverse(ListNode* ptr){

        ListNode* nex = NULL;
        ListNode* prev = NULL;

        while(ptr !=NULL){

            nex = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = nex;
        }

        return prev;



    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next !=NULL && fast->next->next !=NULL){
            
            fast = fast->next->next;
            slow= slow->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
                
        ListNode* dummy = head;


        while(slow !=NULL){
            if(dummy->val != slow->val) return false;
            slow = slow->next;
            dummy=dummy->next;
        }

        return true;
    }
};
