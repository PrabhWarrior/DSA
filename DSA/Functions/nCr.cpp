// nCr  = n! / ( (n-r)! * r! )
#include <iostream>
using namespace std;

int fact(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int ans = fact(n) / (fact(n - r) * fact(r));
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r respectively" << endl;
    cin >> n >> r;
    cout << "The value of " << n << "C" << r << " is " << nCr(n, r) << endl;
    return 0;
}