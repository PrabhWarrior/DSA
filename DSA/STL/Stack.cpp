#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    // Not working
    // for(string i : s)
    // {
    //     cout << i << " ";
    // }cout << endl;

    // Last element using .top()
    cout << "Top Element -> " << s.top() << endl;

    // Poping out the element
    s.pop();

    cout << "Top Element -> " << s.top() << endl;

    // Size of stack
    cout << "Size of stack -> " << s.size() << endl;

    // Empty or not
    cout << "Empty or not -> " << s.empty() << endl;

    return 0;
}