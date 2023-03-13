class Solution {
public:
    void solve(ListNode* list1, ListNode* list2) {
        ListNode* curr = list1;
        ListNode* nex = curr->next;
        ListNode* curr2 = list2;
        ListNode* nex2 = curr2->next;

        while (curr != NULL && curr2 != NULL) {
            if (curr2->val >= curr->val && curr2->val <= nex->val) {
                curr->next = curr2;
                nex2 = curr2->next;
                curr2->next = nex;
                curr = curr2;
                curr2 = nex2;
            } else {
                curr = nex;
                nex = nex->next;
                if (nex == NULL) {
                    curr->next = curr2;
                    return;
                }
            }
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }
        
        if (list1->val > list2->val) {
            swap(list1, list2);
        }
        
        if (list1->next == NULL) {
            list1->next = list2;
            return list1;
        } else {
            solve(list1, list2);
            return list1;
        }
    }
};
