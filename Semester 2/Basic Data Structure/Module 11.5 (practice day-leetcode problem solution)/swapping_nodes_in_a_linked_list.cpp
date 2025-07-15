//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp_head = head;

        vector<int> v;
        while(tmp_head != NULL)
        {
            v.push_back(tmp_head->val);
            tmp_head = tmp_head->next;
        }

        int sz = v.size();

        //reseting tmp_head value to head and traversing vector and inserting the value to the list
        tmp_head = head;
        swap(v[k - 1],v[sz - k]);
        for (int i = 0; i < sz; i++)
        {
            tmp_head->val = v[i];
            tmp_head = tmp_head->next;
        }

        return head;
    }
};