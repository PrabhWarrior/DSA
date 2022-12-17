#include <iostream>
using namespace std;

int main()
{
    /*
      1 2 3
      1 2 3
      1 2 3
    */
    /*
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1; // initializing every time from 1
         while (j <= n)
         {
             cout << j << " ";
             j++;
         }
         i++;
         cout << endl;
     }
     */

    /*
    3 2 1
    3 2 1
    3 2 1
    */
    /*
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        // int j = 1;
        // while(j<=n)
        // {
        //     cout<< n-j+1 <<" ";
        //     j++;
        // } // -- Love Babbar's Logic
        i++;
        cout << endl;
    }
    */

    /*
    1 2 3
    4 5 6
    7 8 9
    */
    /*
    int n;
    cin>>n;
    int i = 0;
    int count = 1;
    while(i < n)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< count << " ";
            count ++;
        }
        i++;
        cout<<endl;
    }
    */
   

}