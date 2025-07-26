//https://www.codingninjas.com/studio/problems/kevin-s-stack-problem_1169465

#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	string result;
	stack<char> st;
	for(char c : s)
	{
		st.push(c);
	}
	while(!st.empty())
	{
		result.push_back(st.top());
		st.pop();
	}
	return result;
}
