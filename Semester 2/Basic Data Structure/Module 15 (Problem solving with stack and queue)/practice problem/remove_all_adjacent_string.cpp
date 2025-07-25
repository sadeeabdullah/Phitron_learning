//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (char c : s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if (st.top() == c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        //here we need to reverse string so we cannot return the new stack
        string result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }

        //here we will get the reverse string because we are taking the top value from the string
        reverse(result.begin(),result.end());
        return result;
    }
};/