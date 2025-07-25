//https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    //creating new stack for copying and storing the value of the given stack
    stack<int> newStack;
    while(!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }

    //after completing pushing the value of the given stack to new stack our given stack is fully blank now we will 
    //add new value given by user in given stack
    myStack.push(x);
    
    //again adding all the value from to the given stack so that the insertion procedure become fulfill.
    while(!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;
}
