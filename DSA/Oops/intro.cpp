#include <iostream>
#include "bits/stdc++.h"
// #include "Hero.cpp"
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << "Constructor Created" << endl;
        name = new char[100];
    }

    // Parametrizeed Constructor
    Hero(int health)
    {
        // cout << "this-> " << this << endl; // this stores the address of currrent object
        // (*this).health = health;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor -- Pass by reference instead of (pass by value -- will create and infinite loop-- again copy construcot will call and again...)
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy Constructor Called" << endl; // default copy constructor will be destroyed when this is created
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << endl;
        cout << "[ Name: " << name << ", ";
        cout << "Level: " << level << ", ";
        cout << "Health: " << health << " ]";
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(int l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // can only access static members
    static int random()
    {
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor Called" << endl;
    }
};

// datatype className :: field = value;
int Hero::timeToComplete = 5;

int main()
{
    // cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl; // not recommended

    // Hero b;
    // b.timeToComplete = 10;
    // cout << b.timeToComplete << endl;
    // cout << a.timeToComplete << endl;
    // // Static
    // Hero a;

    // // Dynamic
    // Hero *b = new Hero();
    // delete b;
    /*
        Hero hero1;
        hero1.setHealth(12);
        hero1.setLevel('D');
        char name[7] = "Babbar";
        hero1.setName(name);

        // hero1.print();

        // use default copy constructor
        Hero hero2(hero1);
        // hero2.print();
        // Hero hero2 = hero1;

        hero1.name[0] = 'G';
        hero1.print();

        hero2.print();

        // Copy Assignemnet Operator
        hero1 = hero2;

        hero1.print();
        hero2.print();
        */

    // Hero suresh(70, 'C');
    // suresh.print();

    // // Copy Constructor
    // Hero R(suresh); // Means --  R.health = suresh.health, R.level = suresh.level
    // R.print();

    // Hero ramesh(70);
    // // cout << "Adress of Ramesh" << &ramesh << endl;
    // ramesh.print();

    // Hero *h = new Hero(11);
    // h->print();

    // Hero b(80, 'A');
    // b.print();

    /*
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.getHealth() << endl;

    // dynamic allocation
    Hero *h = new Hero;

    h->setLevel('A');
    h->setHealth(70);

    // b is address that's why dereferncing
    cout << "Level is " << (*h).level << endl;
    cout << "Health is " << (*h).getHealth() << endl;

    // using arrow accessing
    cout << "Level is " << h->level << endl;
    cout << "Health is " << h->getHealth() << endl;
    */
    // // creation of object
    // Hero ramesh;
    // cout << "Ramesh health is " << ramesh.getHealth() << endl;

    // // use setter
    // ramesh.setHealth(70);
    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // // ramesh.health = 70;
    // ramesh.level = 'A';

    // // cout << "Health is : " << ramesh.health << endl;
    // cout << "Level is : " << ramesh.level << endl;

    // // cout << sizeof(ramesh) << endl;

    return 0;
}