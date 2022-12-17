#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // Pushing at Front
    d.push_back(1);
    d.push_back(4);

    // Pushing at Back
    d.push_front(2);
    d.push_front(3);


    for(int i : d)
    {
        cout << i <<" ";
    }
    cout << endl;

    cout << "After poping from back and front" << endl;

    d.pop_back();
    d.pop_front();

    for(int i : d)
    {
        cout << i <<" ";
    }
    cout << endl;

    cout << "Element at 0th index-> " << d.at(0) << endl;

    cout << "First Element-> " << d.front() << endl;

    cout << "Last Element-> " << d.back() << endl;

    cout << "Empty or not-> " << d.empty() << endl;
    // 0 --> means not empty

    cout << "Before erase, Size ->" << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "After erase, Size ->" << d.size() << endl;

    cout << "Elements Left in Deque" << endl;
    for(int i : d)
    {
        cout << i << " ";
    }

    return 0;
}