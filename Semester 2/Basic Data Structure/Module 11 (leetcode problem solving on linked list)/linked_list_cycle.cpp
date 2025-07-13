//https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool flag = false;
        while(head != NULL && head->next != NULL)
        {
            // first we need to skip and move the slow to one node and fast to double node
            //then check if slow and fast is equal then it has a cycle
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};