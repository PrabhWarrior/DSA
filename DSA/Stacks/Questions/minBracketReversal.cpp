#include <iostream>
#include <stack>
using namespace std;

/*
Sample Input 1:
2
{{{}
{{}{}}

Sample Output 1:
1
0

*/

int findMinimumCost(string str)
{

    // odd string length
    if (str.length() % 2 != 0)
        return -1;

    stack<int> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            st.push(ch);
        }
        else if (ch == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    int a = 0, b = 0;
    while (!st.empty())
    {
        char ch = st.top();
        if (ch == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main()
{

    return 0;
}