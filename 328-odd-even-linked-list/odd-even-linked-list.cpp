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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* oood = new ListNode(0);
        ListNode* even = new ListNode(0);
        ListNode* to = oood;
        ListNode* te = even;
        ListNode* temp = head;
        int count = 1;
        while(temp != NULL){
            if(count % 2 == 0){
                te->next = temp;
                temp = temp->next;
                te = te->next;
            }
            else{
                to->next = temp;
                temp = temp->next;
                to = to->next;
            }
            count++;
        }
        to->next = even->next;
        te->next = NULL;
        return oood->next;
        
    }
};