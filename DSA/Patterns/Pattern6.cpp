#include <iostream>
using namespace std;
/*
    1
  1 2 1
1 2 3 2 1
*/
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // space
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        int j = 1;
        while (j <= (2 * i) - 1)
        {
            int count = 1;
            while (count <= i)
            {
                cout << count << " ";
                count++;
                j++;
            }

            count =  count - 2;
            while (j <= (2 * i) - 1)
            {
                cout << count << " ";
                count--;
                j++;
            }
        }
        cout<<endl;
        i++;
    }

    // while (i <= n)
    // {
    //     // Space print (1st Triangle)
    //     int space = n - i;
    //     while(space)
    //     {
    //         cout<< "  ";
    //         space--;
    //     }

    //     // 2nd Triangle
    //     int j = 1;
    //     while(j <= i)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }

    //     //  3rd Triangle
    //     int k = i-1;
    //     while(k)
    //     {
    //         cout<<k<<" ";
    //         k--;
    //     }
    //     cout<<endl;
    //     i++;
    // } // -- Dividing into triangle -- Love Babbar
}