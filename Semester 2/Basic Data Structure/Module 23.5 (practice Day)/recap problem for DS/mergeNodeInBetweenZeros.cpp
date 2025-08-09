// problem link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

// solution : 

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
    
    // to merge node between zeros we have to remove the connection with zero  value node

    //first we are controlling the first node if 0
    if (head ->val == 0)
        head = head->next;

    // first we will traverse through the linked list

    ListNode *tmp = head;
    while (tmp!= NULL) // we are going to traverse the whole linked list untill we get null mean untill the last node
    {
        // we will have another tmp head to sum the values
        ListNode *tmp_in = tmp->next;

        while(tmp_in->val != 0)
        {
            tmp->val += tmp_in->val;
            tmp_in = tmp_in->next;
        }
        tmp->next = tmp_in->next;
        tmp= tmp->next;

    }

    return head;
    }
};