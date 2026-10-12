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
        ListNode * temp = headA;
        ListNode * temp1 = headB;
        int len =0;
        int len1 = 0;

        while(temp != NULL){
            temp = temp->next;
            len++;

        }
        while(temp1 != NULL){
            temp1 = temp1->next;
            len1++;

        }
        temp1 = headB;
        temp = headA;
        if(len > len1){
            int minlen = len - len1;
            temp = headA;
            for(int i = 1 ; i <= minlen ; i++){
                temp = temp->next;
            }
            temp1 = headB;
        }
        else if(len1 > len){
            int munlen = len1 - len;
            temp1 = headB;
            for(int i = 1 ; i <= munlen ; i++){
                temp1 = temp1->next;
            }
            temp = headA;
        }
        while(temp != temp1){
            temp1 = temp1->next;
            temp = temp->next;



        }
        return temp;
    }
};