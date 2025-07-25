class Solution {
public:
    bool backspaceCompare(string s, string t) {
     stack<char> st;
     stack<char> tt;
     for(char c : s)
     {
        if (c == '#')
        {
            if (!st.empty())
                st.pop();
        }
        else 
        {
            st.push(c);
        }
     }   
     for(char c : t)
     {
        if (c == '#')
        {
            if (!tt.empty())
                tt.pop();
        }
        else 
        {
            tt.push(c);
        }
     }

    return st == tt;
         
    }
};