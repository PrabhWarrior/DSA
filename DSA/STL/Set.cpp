#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(1);
    s.insert(1);
 
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
 
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s)
    {
        cout << i <<" ";
    }
    cout << endl;


    set<int>::iterator it = s.begin();
    it++;

    // s.erase(s.begin()+1); -- not working
    s.erase(it);

    cout << "After erase" << endl;
    for(auto i : s)
    {
        cout << i <<" ";
    }
    cout << endl;


    cout << "5 is present or not -> " << s.count(5) << endl;
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr;
    itr = s.find(5);

    for(auto it = itr; it!=s.end();it++)
    {
        cout << *it <<" ";
    }
    cout << endl;

    return 0;
}