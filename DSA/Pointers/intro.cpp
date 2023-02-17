#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    // address of Operator -- HexaDecimal Format { 0..9..a...f }
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Value is : " << *ptr << endl;
    cout << "Address is : " << ptr << endl;

    double d = 4.3;

    double *p2;
    p2 = &d;

    cout << "Value is : " << *p2 << endl;
    cout << "Address is : " << p2 << endl;

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(p2) << endl; // majority --8

    // pointer to int is created , and pointing to some garbage address
    // int *p = 0;

    // cout << *p << endl; -- segmentation fault in Mac if *p = 0

    // Practice

    int a = 5;
    int b = a;
    cout << "Before : " << a << endl;
    b++;
    cout << "After : " << a << endl;

    int *p = &a;
    cout << "Before : " << a << endl;
    (*p)++;
    cout << "After : " << a << endl;

    // Copying a pointer

    int *q = p;
    cout << p << " _ " << q << endl;
    cout << *p << " _ " << *q << endl;
    
    q = q + 1;

    cout << p << " _ " << q << endl;
    cout << *p << " _ " << *q << endl;

    // Important Concept
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    // *t = *t + 1;
    // cout << *t << endl;

    
    cout << "Before : " << t << endl;
    t++; // t = t + 1 -- t + (4 bytes) i.e. sizeof(int)
    cout << "After : " << t << endl;

}