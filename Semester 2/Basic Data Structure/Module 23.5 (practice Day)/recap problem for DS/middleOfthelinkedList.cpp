// problem link : https://leetcode.com/problems/middle-of-the-linked-list/

// solution :

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *tmp = head;
        int cnt = 0;
        // first we will traverse through all the node and count the node and find the middle
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }

        tmp = head;
        int sz = cnt / 2;
        int i = 0;
        while (i < sz)
        {
            tmp = tmp->next;
            i++;
        }
        return tmp;
    }
};