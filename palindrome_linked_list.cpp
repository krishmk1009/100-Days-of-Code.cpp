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
 bool isPalindrome(string store){
        int start = 0;
        int end = store.length() -1;

        while(start<end){
            if(store[start] !=store[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
    bool isPalindrome(ListNode* head) {
        string store="";

        ListNode* temp = head;

        while(temp!=NULL){
            string data = to_string(temp->val);
            store+= data;

            temp = temp->next;
        }

        bool ans =  isPalindrome(store);
        return ans;
    }
};
