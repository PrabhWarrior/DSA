#include <iostream>
using namespace std;

int aP(int n)
{
    return (3*n) + 7;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The nth term of A.P. is " << aP(n) << endl;
    return 0;
}