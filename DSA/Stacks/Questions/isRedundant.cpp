#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless.
While (a + (b*c)) does not have any pair of redundant brackets.

Return 'true' -- If redundant else 'false'
*/
bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            bool isReduntant = true;
            while (st.top() != '(')
            {
                ch = st.top();
                if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
                    isReduntant = false;
                st.pop();
            }
            if (isReduntant)
                return true;
            st.pop();
        }
    }

    return false;
}

int main()
{

    return 0;
}