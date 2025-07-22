//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // we are inserting student vector in a queue and sandwiches in a stack
        stack<int> snd;
        queue<int> st;
        for (int i = sandwiches.size() - 1; i >= 0; i--)
        {
            snd.push(sandwiches[i]);
        }
        for (int student : students)
            st.push(student);

        int shift_cnt = 0;
        while(1) // starting with infinity loop and break it with proper condition in it;
        {
            if(st.front() == snd.top())
            {
                st.pop();
                snd.pop();
                shift_cnt = 0;
            }
            else
            {
                st.push(st.front());
                st.pop();
                shift_cnt++;
            }

            if(snd.empty() || st.size() == shift_cnt)
            {
                break;
            }
        }
        return st.size();
    }
};