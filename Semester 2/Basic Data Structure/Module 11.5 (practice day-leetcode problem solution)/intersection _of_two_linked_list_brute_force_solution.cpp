//https://leetcode.com/problems/intersection-of-two-linked-lists/
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tmp_A = headA;

        while (tmp_A != NULL) {
            ListNode* tmp_B = headB;
            while(tmp_B != NULL)
            {
                if (tmp_A == tmp_B)
                {
                    cout << tmp_A->val << " " << tmp_B->val << endl;
                    return tmp_B;
                }
                tmp_B = tmp_B->next;
            }
                tmp_A = tmp_A->next;
        }
        return NULL;
    }
};