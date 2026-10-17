class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k){
        if(head == NULL) return NULL;
        ListNode* temp1 = head;
        int size = 0;
        while(temp1->next != NULL){
            temp1 = temp1->next;
            size++;
        }
        size++;
        temp1->next = head;
        k = k % size;
        int idx = size - k;
        ListNode* temp2 = head;
        for(int i = 1 ; i < idx ; i++){
            temp2 = temp2->next;
        }
        head = temp2->next;
        temp2->next = NULL;
        return head;
    }
};