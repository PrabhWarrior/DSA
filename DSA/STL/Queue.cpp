#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "First element -> " << q.front() << endl;

    cout << "Size before pop -> " << q.size() << endl;

    //  After poping out the element from front
    q.pop();

    cout << "First element -> " << q.front() << endl;

    cout << "Size after pop -> " << q.size() << endl;

    return 0;
}