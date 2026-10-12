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
            for(int i = 1 ; i <= minlen ; i++){
                temp = temp->next;
            }
        }
        else if(len1 > len){
            int munlen = len1 - len;
            for(int i = 1 ; i <= munlen ; i++){
                temp1 = temp1->next;
            }
        }
        while(temp != temp1){
            temp1 = temp1->next;
            temp = temp->next;
        }
        return temp;
    }
};