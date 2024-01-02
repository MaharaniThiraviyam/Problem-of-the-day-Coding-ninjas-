//pushAtBottom
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int temp;
    if(myStack.empty()) {
        myStack.push(x);
    }
    else {
        temp = myStack.top();
        myStack.pop();
        myStack = pushAtBottom(myStack, x);
        myStack.push(temp);
    }
 
    return myStack;
}
