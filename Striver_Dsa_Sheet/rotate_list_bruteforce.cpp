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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> store ;


        ListNode* temp = head;

        while(temp!=NULL){
            store.push_back(temp->val);
            temp= temp->next;
        }

        while(k >0){

            int i = store.size()-1;

            while(i >0){
              
              swap(store[i] , store[i-1]);
              i--;

            }
            k--;

        }

        temp = head;
        int i = 0;

        while(temp!=NULL){
            temp->val= store[i++];
            temp = temp->next;
        }
        return  head;
    }
};



// 1 2 3 4 5
// 1 2 3 5 4
// 1 2 5 3 4
// 1 5 2 3 4
// 5 1 2 3 4

// 5 1 2 4 3
// 5 1 4 2 3
// 5 4 1 2 3
// 4 5 1 2 3





// temp = 1
// 5 2 3 4 5
