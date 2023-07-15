#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &myStack, int count, int x)
{
    // base case
    if (count == 0)
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();
    solve(myStack, --count, x);

    myStack.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    int count = myStack.size();
    solve(myStack, count, x);
    return myStack;
}
int main()
{

    return 0;
}