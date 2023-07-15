#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int size, int count)
{
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, size, count + 1);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    // recursive Approach
    // int count = 0;
    // solve(inputStack, N, count+1);
    stack<int> temp;
    int i;
    if ((N + 1) % 2 == 0)
    {
        i = (N + 1) / 2;
    }
    else
    {
        i = N / 2;
    }
    i = N + 1 - i;
    while (i > 0)
    {
        temp.push(inputStack.top());
        inputStack.pop();
        i--;
    }
    temp.pop();

    while (!temp.empty())
    {
        inputStack.push(temp.top());
        temp.pop();
    }
}
int main()
{

    return 0;
}