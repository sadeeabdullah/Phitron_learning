// problem link: https://leetcode.com/problems/valid-parentheses/

// solution:
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                if (st.empty()) return false; // no opening bracket to match

                if ((st.top() == '(' && ch == ')') ||
                    (st.top() == '{' && ch == '}') ||
                    (st.top() == '[' && ch == ']')) {
                    st.pop();
                } 
                else {
                    return false; // mismatched pair
                }
            }
        }

        return st.empty();
    }
};
