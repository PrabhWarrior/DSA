#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl; // right shift
    cout << (17 >> 2) << endl;
    cout << (21 << 2) << endl; // left shift
    cout << (21 << 1) << endl;

    int i = 7;

    cout << (++i) << endl; // 8 , i = 8
    cout << (i++) << endl; // 8 , i = j
    cout << (i--) << endl; // 9 , i = 8
    cout << (--i) << endl; // 7 , i = 7

   
}
