#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int a = 0;
    int b = 1;
    int temp;

    for (int i = 3; i <= n; i++)
    {
        temp = a;
        a = b;
        b = a + temp;
    }
    return b;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The required number is " << fibonacci(n) << endl;
    return 0;
}