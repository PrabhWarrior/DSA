#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &st, int num)
{
    if (st.empty() || (!st.empty() && st.top() < num))
    {
        st.push(num);
        return;
    }

    int num2 = st.top();
    st.pop();
    sortedinsert(st, num);
    st.push(num2);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
        return;

    int num = st.top();
    st.pop();

    sortStack(st);

    sortedinsert(st, num);
}
int main()
{

    return 0;
}