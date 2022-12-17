#include <iostream>
using namespace std;
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // First Triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        // Second Triangle
        int k = 1;
        while (k <= 2 * (i - 1))
        {
            cout << "*" << " ";
            k++;
        }

        // Third Triangle
        int l = n - i + 1;
        while (l)
        {
            cout<< l <<" ";
            l--;
        }
            cout << endl;
        i++;
    }
}