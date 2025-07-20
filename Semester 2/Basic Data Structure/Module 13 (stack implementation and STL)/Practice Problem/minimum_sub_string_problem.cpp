//https://leetcode.com/problems/minimum-string-length-after-removing-substrings/

class Solution {
public:
    int minLength(string s) {
        //taking a char stack 
        stack<char> st;
        //taking the character input
        for(char c : s)
        {
            if (st.empty()) // first checking if the stack is blank or not if blank we have to insert the element or character first
            {
                st.push(c);
            }
            //else we have to start checking
            else
            {
                if ((c == 'B' && st.top() == 'A') || (c == 'D' && st.top() == 'C'))
                {
                    st.top(); //remove the top if insertation value is B and the top is A then we are getting AB so we will remove the A and as same the other condition

                }
                else
                {
                    st.push(c);
                }
            }
            return st.size();
        }
    }
};