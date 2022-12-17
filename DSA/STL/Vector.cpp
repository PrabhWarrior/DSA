#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector of size 5 and all the elements are initialized with 1
    vector<int> a(5,1);

    vector<int> Copy_a(a);
    cout << "Printing Copy_a" << endl;
    for(int i : Copy_a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;
    // capacity means -> Total memory allocated
    cout << "Capacity-> " << v.capacity() << endl;

    // size means -> Total elements allocated
    cout << "Size-> " << v.size() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    // here it's 4
    
    cout << "Size-> " << v.size() << endl;
    // here it's 3
    
    cout << "Element at 2nd index-> " << v.at(2) << endl;

    cout << "First Element-> " << v.front() << endl;

    cout << "Last Element-> " << v.back() << endl;

    cout << "Before pop" << endl;
    for(int i : v)
    {
        cout << i <<" ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for(int i : v)
    {
        cout << i <<" ";
    }
    cout << endl;

    cout << "Capacity-> " << v.capacity() << endl;    
    cout << "Size-> " << v.size() << endl;

    cout << "Before clear size-> " << v.size() << endl;
    v.clear();
    cout << "After clear size-> " << v.size() << endl;

    // Starting's Iterator --> v.begin()
    // Ending's Interator --> v.end()

    

    return 0;
}