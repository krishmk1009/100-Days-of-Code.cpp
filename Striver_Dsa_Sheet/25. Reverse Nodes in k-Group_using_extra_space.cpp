25. Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head==NULL){
            return NULL;
        }
        
        int len = 0;

        ListNode* temp = head;

        while(temp!=NULL){

            len++;
            temp= temp->next;
        }

        temp = head;

        while(len >=k){

            vector<int> store;
            ListNode* pointer = temp;

            for(int i = 0;i<k ;i++){

                store.push_back(pointer->val);
                pointer = pointer->next;

            }
            reverse(store.begin() , store.end());

            for(int i = 0;i<k ; i++){

                temp->val = store[i];
                temp= temp->next;
            }

            len-=k;

        }
        return head;
    }
};
