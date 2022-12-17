// divide by 1 and itself  start from 2 goes upto less than n
#include <iostream>
using namespace std;

// 1 -- > Prime
// 0 -- > Not Prime

bool isPrime(int n)
{
    bool ans = 0;
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not Prime" << endl;
    }
    return 0;
}