#include <iostream>
#include <vector>
using namespace std;

void vectorReverse(vector<int> &v)
{
    int s = 0;
    int e = v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }

}


void printVector(vector<int> v)
{
    for(int i : v)
    {
        cout << i <<" ";
    }cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    printVector(v);

    vectorReverse(v);

    printVector(v);
    return 0;
}