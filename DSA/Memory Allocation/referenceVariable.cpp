#include <iostream>
using namespace std;

// Bad Practice
// int& update(int n)
// {
//     int a = 10;
//     int &ans = a;
//     return ans;
// }

void update1(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    // int i = 5;

    // // create a reference variable

    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << n << endl;
    // update1(n);
    update2(n);
    cout << n << endl;

    // update(n);

    return 0;
}