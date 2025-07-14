//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp_head = head;

        vector<int> v;
        while (tmp_head != NULL) {
            v.push_back(tmp_head->val);
            tmp_head = tmp_head->next;
        }
        tmp_head = head;
        swap(v[k - 1], v[v.size() - k]);
        for (int i = 0; i < v.size(); i++) {
            tmp_head->val = v[i];
            tmp_head = tmp_head->next;
        }
        return head;
    }
};