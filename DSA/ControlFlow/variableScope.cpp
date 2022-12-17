#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    cout << a << endl;
    if (1)
    {
        int a = 5, b = 9;
        cout << a << endl;
        cout << b << endl;
    }
    cout << a << endl;
    // cout << b << endl;  // -- can't access

    // int a = 7;  //-- can't redefine

    int i = 8;
    for (int i = 0; i < 8; i++)
    {
        cout << " Hi " << endl;
    }

    if (1)
    {
        int b;
        if (1)
        {
            int b;
            if (1)
            {
                int b;
                if (1)
                {
                    int b;
                }
            }
        }
    }
}