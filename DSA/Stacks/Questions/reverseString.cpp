#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "babbar";
    stack<char> s;
    for (auto &i : str)
    {
        s.push(i);
    }
    string ans = "";

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout << str << endl
         << ans << endl;

    return 0;
}