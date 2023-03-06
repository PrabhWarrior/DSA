#include <iostream>
using namespace std;
// n starting from 0
int fibFor(int n)
{    
    if(n == 0) return 0;
    if(n == 1) return 1;

    int first = 0;
    int second = 1;

    for(int i = 2; i<=n; i++)
    {
        int temp = first;
        first = second;
        second += temp;
    }

    return second;
    
}

int fib(int n)
{
    // base case
    if (n <= 1)
        return n;

    // recursive relation
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << fib(n) << endl;
    cout << fibFor(n) << endl;
    return 0;
}