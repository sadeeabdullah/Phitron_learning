#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> st;
	stack<int> newSt;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(newSt.empty())
			{
				newSt.push(num);
			}
			else if (newSt.top() >= num)
			{
				newSt.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if (st.empty()) return -1;
			int val = st.top();
			if (newSt.top() == st.top())
				newSt.pop();

			st.pop();
			return val;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top() {
        if (st.empty()) return -1;
        return st.top();
    }

    // Return minimum element
    int getMin() {
        if (newSt.empty()) return -1;
        return newSt.top();
    }
};