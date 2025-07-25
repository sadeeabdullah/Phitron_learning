//https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 

//creating a sum function for getting the sum of stack
long long getSum (stack<int> st)
{
    long long sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    return sum;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    long long sum1 = getSum(stk1);
    long long sum2 = getSum(stk2);
    long long sum3 = getSum(stk3);

    // the while loop will run untill the sums are equal to each other
    while (true)
    {
        if(sum1 == sum2 && sum2 == sum3)
        {
            break;
        }
        else if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 -= stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}