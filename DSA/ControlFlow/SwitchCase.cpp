#include <iostream>
using namespace std;

int main()
{
    /*
    char ch = '1';
    int num = 1;

    cout << endl;
    switch (2*num)
    {
    case 2:
        cout << "First" << endl;
        cout << "First again" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "The value of num is " << num << endl;
            break;
        }
        break;
        // continue; continue statement not within a loop
    default:
        cout << "It's a default case" << endl;
    }
    */

    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
    {
        cout << (a + b) << endl;
    }
    break;
    case '-':
    {
        cout << (a - b) << endl;
        break;
    }
    case '*':
    {
        cout << (a * b) << endl;
    }
    break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Enter a valid operation!" << endl;
    }

    return 0;
}