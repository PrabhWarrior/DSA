#include <iostream>
using namespace std;

// int power(int a, int b)
// {
//     // Base case
//     if (b == 0)
//         return 1;

//     if (b == 1)
//         return a;

//     if (b % 2 == 0)
//     {
//         return power(a, b / 2) * power(a, b / 2);
//     }
//     else
//     {
//         return a * power(a, b / 2) * power(a, b / 2);
//     }
// }
int power(int a, int b)
{
    // Base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << ans << endl;

    return 0;
}