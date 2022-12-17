#include <iostream>
using namespace std;

int Rev(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        x = x/10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + digit;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number"<<endl;
    cin >> n;
    cout<<Rev(n)<<endl;

    return 0;
}