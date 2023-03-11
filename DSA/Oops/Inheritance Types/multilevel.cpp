#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
};

class Pitbull : public Dog
{
};

int main()
{
    Pitbull p;
    p.speak();
    cout << p.age << endl;
    return 0;
}