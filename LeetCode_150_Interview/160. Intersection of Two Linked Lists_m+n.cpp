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


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int lenA = 0;
      int lenB = 0;

    ListNode*tempA = headA;
    ListNode*tempB = headB;

      while(tempA!=NULL){
            lenA++;
            tempA= tempA->next;
      }
      while(tempB!=NULL){
            lenB++;
            tempB= tempB->next;
      }


        tempA = headA;
        tempB = headB;

        while (lenA > lenB) {
            if(tempA == NULL) return NULL;
            tempA = tempA->next;
            lenA--;
        }

        while (lenB > lenA) {
            if(tempB == NULL) return NULL;
            tempB = tempB->next;
            lenB--;
        }

        while (tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA; // This is the intersection point or NULL if there's no intersection
    
     






       

        
    }
};
