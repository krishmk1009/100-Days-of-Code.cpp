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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long first=0 , second =0;
vector<int>f;
vector<int>s;

    ListNode* f1 = l1; // Initialize f1 with l1
    ListNode* f2 = l2; // Initialize     with l2

        while (f1 != NULL) {
            f.push_back(f1->val);
            f1 = f1->next;
        }

        while (f2 != NULL) {
            s.push_back(f2->val);
            f2 = f2->next;
        }


     for(int i = f.size()-1 ; i>=0 ; i--){

         first = first*10+f[i];
     }


     for(int i = s.size()-1 ; i>=0 ; i--){

         second = second*10+s[i];
     }
    
     long long third = first +second;
     
     
     cout<<first<<endl;
     cout<<second;
    

      ListNode* result = nullptr; // New linked list to store the result
        ListNode* current = nullptr;
    if(third == 0){
                result = new ListNode(0);
                        return result;

    }
        while (third != 0) {
            int digit = third % 10;
            
            if (result == nullptr) {
                result = new ListNode(digit);
                current = result;
            } else {
                current->next = new ListNode(digit);
                current = current->next;
            }

            third /= 10;
        }

        return result;




    }
};
