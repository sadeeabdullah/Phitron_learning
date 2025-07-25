//https://leetcode.com/problems/make-the-string-great/

class Solution {
public:
    string makeGood(string s) {
         stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && abs(st.top() - c) == 32)
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
};