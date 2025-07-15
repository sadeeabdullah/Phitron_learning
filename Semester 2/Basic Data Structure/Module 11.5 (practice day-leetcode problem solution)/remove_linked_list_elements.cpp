//https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* del;
        if(head == NULL)
        {
            return head;
        }

        

        ListNode* tmp = head;

        // Now if the value after first value of given value
        while (tmp->next != NULL ) {
            if (tmp->next->val == val) {
                // del = tmp->next;
                tmp->next = tmp->next->next;
                // delete del;
            } else {
                tmp = tmp->next;
            }
        }
        if(head->val == val)
        {
            head = head->next;
        }
        
        return head;
    }
};