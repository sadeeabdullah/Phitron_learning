//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
        {
            head = head->next;
            return head;
        }
        ListNode *tmp = head;
        int cnt = 0;   
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }

        int del_idx = cnt / 2;
        tmp = head;
        for (int i = 1; i < del_idx; i++)
        {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
};