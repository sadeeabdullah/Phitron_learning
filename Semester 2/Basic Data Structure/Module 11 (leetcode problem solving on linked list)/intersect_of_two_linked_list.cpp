//https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        while (headA != NULL) {
            ListNode* tmp = headB;
            while (tmp != NULL) {

                if (headA == tmp) {
                    return headA;
                }
                tmp = tmp->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
};