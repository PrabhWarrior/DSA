#include <iostream>
using namespace std;

int setBits(int a, int b)
{
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        if (a & 1)
        {
            temp++;
        }
        a = a >> 1;
    }
    for (int i = 0; i < b; i++)
    {
        if (b & 1)
        {
            temp++;
        }
        b = b >> 1;
    }

    return temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of a & b" << endl;
    cin >> a >> b;
    cout << "Total no. of set bits are " << setBits(a, b) << endl;
    return 0;
}