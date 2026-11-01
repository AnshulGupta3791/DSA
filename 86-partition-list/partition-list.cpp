class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* lo = new ListNode(0);
        ListNode* hi = new ListNode(0);
        ListNode* tl = lo;
        ListNode* th = hi;
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                tl->next = temp;
                temp = temp->next;
                tl = tl->next; 
            }
            else{
                th->next = temp;
                temp = temp->next;
                th = th->next; 
            }
        }
        th->next = NULL;
        lo = lo->next;
        hi = hi->next;
        tl->next = hi;
        if(lo == NULL){
            return hi;
        }
        return lo;
    }
};