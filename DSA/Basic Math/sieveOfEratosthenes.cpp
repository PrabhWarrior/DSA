// Give Count of prime numbers under given integer n
#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n)
{
    vector<bool> prime(n+1,true);

    prime[0] = prime[1] = false;

    int count = 0;

    for(int i = 2; i<n; i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=i*2; j<n; j=j+i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << countPrime(n) << endl;
    return 0;
}