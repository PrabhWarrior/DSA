#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // should be in sorted order -- binary search condition
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

    // lower_bound & upper_bound returns -- ITERATOR
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    cout << "Lower bound -> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    int a = 3;
    int b = 5;

    //  max min
    cout << "max -> " << max(a,b) << endl;
    cout << "min -> " << min(a,b) << endl;

    // swap
    cout << "a b before swap -> " << a <<" " << b << endl;
    swap(a,b);
    cout << "a b after swap -> " << a <<" " << b << endl;

    // We can also swap --> vectors, stacks .. etc ..

    string s = "abcd";
    // int s = 1234; -- reverse not working on int 

    // reverse
    cout << "s before reverse -> " << s << endl;
    reverse(s.begin(), s.end());
    cout << "s after reverse -> " << s << endl;

    // rotate
    cout << "Before rotate " << endl;
    for(int i : v)
    {
        cout << i << " ";
    }cout << endl;

    rotate(v.begin(), v.begin()+1, v.end() );
    cout << "After rotate " << endl;
    for(int i : v)
    {
        cout << i << " ";
    }cout << endl;

    // sort funtion based on intro-sort (3 Algos works together-> quick, heap & insertion sort)
    cout << endl << "After sort" << endl;
    sort(v.begin(), v.end());
    for(int i : v)
    {
        cout << i << " ";
    }cout << endl;

    return 0;
}