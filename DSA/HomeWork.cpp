#include <iostream>
using namespace std;
int pow(int n, int p)
{
    if (p <= 0)
    {
        return 1;
    }
    int sum = 1;
    for (int i = 1; i <= p; i++)
    {
        sum = sum * n;
    }
    return sum;
}

int main()
{

    // Binary to Decimal // 110 = 6

    /*
    int n;
    cin >> n;
    int sum = 0;
    int digit;
    int i = 0;
    while (n)
    {
        digit = n % 10;
        n /= 10;

        // if(digit == 1)
        // {
        //   sum = sum + pow(2, i);
        // }

        sum = sum + digit * pow(2, i);
        i++;
    }
    cout<<sum;
    */

    // Decimal to Binary
    /*
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = bit * pow(10, i) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
    */

    // Decimal to Binary --ve
    int n;
    cin >> n;

    bool check = 0;

    if (n<0)
    {
        n = -n;
        check = 1;

    }

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        cout << bit;
        if (check)
        // 1's complement
        {
            ans = !bit * pow(10, i) + ans;
        }
        else
        {
        ans = bit * pow(10, i) + ans;
        }

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;

    // Sqrt
    // int n;
    // cin>>n;

    return 0;
}