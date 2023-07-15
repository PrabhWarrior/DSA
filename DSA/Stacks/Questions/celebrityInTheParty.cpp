#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (M[a][b] == 1)
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }

    int x = st.top();
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            continue;
        }
        if (M[i][x] == 0 || M[x][i] == 1)
        {
            return -1;
        }
    }

    return x;
}
int main()
{

    return 0;
}