#include <iostream>
using namespace std;

void update(int **p1)
{
    // p1 = p1 + 1; // No change

    // *p1 = *p1 + 1; // Yes Change

    // **p1 = **p1 + 1; // Yes Change
}

int f(int x, int *py, int **ppz)
{
    int y,z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x +=3;

    return x + y + z;
}

int main()
{
    int i = 5;
    int *p = &i;

    int **p1 = &p;

    // cout << "Printing p : " << p << endl;
    // cout << "Address of p : " << &p << endl;

    // cout << "Printing *p1 : " << *p1 << endl; // Same as what p is containg

    // // Value of i
    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p1 << endl
    //      << endl;

    // // Adress of i
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p1 << endl
    //      << endl;

    // // Adress of p
    // cout << &p << endl;
    // cout << p1 << endl
    //      << endl;

    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p1 << endl;
    update(p1);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p1 << endl;
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;

    // cout << f(c,b,a) << endl;


    
    return 0;
}