#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[5] = "abcd";

    cout << arr << endl;
    cout << ch << endl; // abcd

    char *c = &ch[0];
    cout << c << endl; // abcd

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; 
    // zabc.. it will print until it reaches null char

    return 0;
}