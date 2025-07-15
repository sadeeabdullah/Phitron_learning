//https://leetcode.com/problems/merge-nodes-in-between-zeros/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next; //skipping the first node 0
        ListNode* tmp = head;
        while (tmp != NULL) {
            ListNode* tmp_in = tmp->next;
            while (tmp_in->val != 0) {
                tmp->val += tmp_in->val;
                tmp_in = tmp_in->next;
            }
            tmp->next = tmp_in->next;
            tmp = tmp->next;
        }
        return head;
    }
};