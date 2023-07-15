#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{

    int n = heights.size();
    vector<int> nextSmaller(n);
    vector<int> prevSmaller(n);

    stack<int> st;

    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = heights[i];
        // Storing Indexes that's why should not equal to -1
        while (st.top() != -1 && heights[st.top()] >= curr)
        {
            st.pop();
        }
        nextSmaller[i] = st.top();
        st.push(i);
    }

    while (st.top() != -1)
    {
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        int curr = heights[i];
        // Storing Indexes that's why should not equal to -1
        while (st.top() != -1 && heights[st.top()] >= curr)
        {
            st.pop();
        }
        prevSmaller[i] = st.top();
        st.push(i);
    }

    int result = -1;
    for (int i = 0; i < n; i++)
    {
        // If index of next is equal to -1, it means nth value of the array
        if (nextSmaller[i] == -1)
        {
            nextSmaller[i] = n;
        }
        int breadth = nextSmaller[i] - prevSmaller[i] - 1;
        int length = heights[i];

        result = max(result, length * breadth);
    }

    return result;
}

int main()
{

    return 0;
}