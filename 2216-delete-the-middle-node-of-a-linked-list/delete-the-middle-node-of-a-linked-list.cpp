class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int idx = 0;
        if (head->next == NULL){
            head = NULL;
            return head;
        }
        while(fast!= NULL && fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
            idx++;
        }

        if(idx == 1 && fast == NULL){
            head->next = NULL;
            return head;

        }
        else {
            slow->val = slow->next->val;
            slow->next = slow->next->next;
        }
        return head;

    }
};