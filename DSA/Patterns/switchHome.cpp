#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the amount you want notes of $100 , $50 , $20 , $1"<<endl;
    int amount;
    cin >> amount;
    int temp;
    switch(1)
    {
        case 1:
            temp = amount / 100;
            amount = amount % 100; // 1330 - 1300 == 30
            cout << "You will have " << temp << " $100 notes " <<endl;

        case 2:
            temp = amount / 50;
            amount = amount % 50;
            cout << "You will have " << temp << " $50 notes " <<endl;

        case 3:
            temp = amount / 20;
            amount = amount % 20;
            cout << "You will have " << temp << " $20 notes " <<endl;

        case 4:
            temp = amount / 1;
            amount = amount % 1;
            cout << "You will have " << temp << " $1 notes " <<endl;

    }
    return 0;
}