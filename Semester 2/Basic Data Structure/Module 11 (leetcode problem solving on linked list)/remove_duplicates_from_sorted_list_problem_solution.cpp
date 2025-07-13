//https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        ListNode* tmp = head;
        while (tmp->next != NULL) {
            ListNode* del;
            if (tmp->val == tmp->next->val) {
                del = tmp->next;
                tmp->next = tmp->next->next;
                delete del;
            } else {
                tmp = tmp->next;
            }
        }
        return head;
    }
};