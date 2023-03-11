#include <iostream>
using namespace std;
// Hybrid :  Combination of more than 1 type of Inheritance (like multiple + hierarchical)
class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};

class D
{
public:
    void func2()
    {
        cout << "Inside Function 2" << endl;
    }
};

class B : public A
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};

class C : public A, public D
{
};

int main()
{
    C obj;
    obj.func1();
    obj.func2();
    return 0;
}