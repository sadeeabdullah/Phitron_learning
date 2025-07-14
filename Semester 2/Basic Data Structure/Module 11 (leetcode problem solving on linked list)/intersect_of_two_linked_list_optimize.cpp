//https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
            ListNode* tmp_A = headA;
            ListNode* tmp_B = headB;
        while (tmp_A != tmp_B) {
            if (tmp_A == NULL){
                tmp_A = headA;
            }
            else
            {
                tmp_A = tmp_A->next;
            }
                if(tmp_B == NULL)
                {
                    tmp_B = headB;
                }
                else
                {
                    tmp_B = tmp_B->next;
                }
        }
        return tmp_A;
    }
};