/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

public:
    void insert_at_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    //function for recursion
    void reverse_list(ListNode *&newhead, ListNode *tmp)
    {
        if (tmp->next == NULL)
        {
            newhead = tmp;
            return;
        }
        reverse_list(newhead, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        // travers the value of the given List
        ListNode* tmp = head;
        while (tmp != NULL) {
            insert_at_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }

        reverse_list(newhead,newhead);
        // checking palindrome or not
        tmp = newhead;
        ListNode *old_tmp = head;
        while (tmp != NULL) {
            if(tmp->val != old_tmp->val)
            {
                return false;
            }
            tmp= tmp->next;
            old_tmp= old_tmp->next;
        }
        return true;
    }
};