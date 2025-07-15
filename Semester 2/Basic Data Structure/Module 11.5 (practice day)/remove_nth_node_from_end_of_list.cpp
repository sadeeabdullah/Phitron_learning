//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            // gettting the size
            int sz = 0;
            ListNode* tmp = head;
            while(tmp != NULL)
            {
                sz++;
                tmp = tmp->next;
            }
            tmp = head;
            //if size is 1 then we have to delete that value so we will move head to next(NULL)
            if(sz == n)
            {
                head = head->next;
            }
            else 
            {
                for(int i = 1; i < sz - n; i++)
                {
                    tmp = tmp->next;
                }
                tmp->next = tmp->next->next;
            }
            return head;
        }
};