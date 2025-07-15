//https://leetcode.com/problems/intersection-of-two-linked-lists/


class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tmp_A = headA;
        ListNode* tmp_B= headB;

//we are running this loop as condition that it will break if the two node is equal
//so we will get the pointer where two list intersects they might intersect on NULL as well if they don't intersect in any node
        while (tmp_A != tmp_B) {


            if (tmp_A == NULL){
                tmp_A= headB;
            }
            else
            {
                tmp_A = tmp_A->next;
            }
            if (tmp_B == NULL){
                tmp_B= headA;
            }
            else
            {
                tmp_B = tmp_B->next;
            }

        }
        return tmp_A;
    }
};