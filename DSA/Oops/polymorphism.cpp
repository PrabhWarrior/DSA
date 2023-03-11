#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Prabh " << endl;
    }

    int sayHello(string name, int n)
    {
        cout << "Hello " << name << endl;
        return n;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add() { return a + b; }
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;

        // cout << "hello " << endl;
    }

    void operator()()
    {
        cout << "Bracket called! " << this->a << endl;
    }
};

class Animal
{

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking " << endl;
    }
};

int main()
{
    Dog d;
    d.speak();

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();

    // A obj;
    // obj.sayHello();
    // obj.sayHello("Jonas");
    // cout << obj.sayHello("Neil", 1) << endl;
    return 0;
}