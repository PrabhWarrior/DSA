#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> st;

    for (int i = 0; i < expression.size(); i++)
    {
        char ch = expression[i];

        if (ch == '[' || ch == '(' || ch == '{')
        {
            if (ch == '[')
            {
                st.push(']');
            }
            else if (ch == '(')
            {
                st.push(')');
            }
            else
            {
                st.push('}');
            }
        }
        else
        {
            if (!st.empty() && ch == st.top())
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{

    return 0;
}