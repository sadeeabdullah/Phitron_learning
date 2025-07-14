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
    bool isPalindrome(ListNode* head) {

        vector<int> a;
        // travers the value of the given list
        ListNode* tmp = head;
        while (tmp != NULL) {
            a.push_back(tmp->val);
            tmp = tmp->next;
        }

        //let's take another vector 
        vector<int> a2;
        a2 = a;
        reverse(a2.begin(),a2.end());
        return a == a2;
    }
};