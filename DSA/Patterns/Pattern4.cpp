#include <iostream>
using namespace std;
int main()
{
    /*
     *
     * *
     * * *
     * * * *
     */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << endl;
    }
    */

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */

    /*
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    */

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    /*
    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */

    /*
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }

        // int j = 1;
        // while(j<=i)
        // {
        //     cout << i + j - 1<< " ";
        //     j++;
        // } -- without count
        cout << endl;
        i++;
    }
    */

    /*
    1
    2 1
    3 2 1
    4 3 2 1
    */

    /*
    int n;
    cin>> n;
    int i = 1;
    while(i<=n)
    {
     int j=i;
     while(j>0)
     {
         cout<< j <<" ";
         j--;
     }
     // int j=1;
     // while(j<=i)
     // {
     //     cout<< i-j+1 <<" ";
     //     j++;
     // } // -- Love Babbar
     cout<<endl;
     i++;

    }
    */
    /*
    A A A
    B B B
    C C C
    */

    /*
     int n;
     cin>>n;
     int i = 1;
     while(i <= n)
     {
         int j = 1;
         char c = 65+i-1; // instead of 65 -- 'A'
         while(j<=n)
         {
             cout << c <<" ";
             j++;
         }
         cout<<endl;
         i++;

     }
     */

    /*
    A B C
    A B C
    A B C
    */

    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    A B C
    D E F
    G H I
    */

    /*
    int n;
    cin>>n;
    char c = 'A';
    int i = 1;
    while(i <= n)
    {
         int j = 1;
         while(j<=n)
         {
             cout<< c <<" ";
             c++;
             j++;
         }
         cout<<endl;
         i++;
    }
    */

    /*
    A B C
    B C D
    C D E
    */

    /*
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        char c = 'A'+i-1;
        int j = 1;
        while (j <= n)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    A
    B B
    C C C
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char c = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    A
    B C
    D E F
    G H I J
    */

    /*
    int n;
    cin>>n;
    char c = 'A';
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    /*
    A
    B C
    C D E
    D E F G
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char c = 'A'+i-1;
        int j = 1;
        while (j <= i)
        {
            cout << c << " ";
            c++;
            j++;
        }

        // int j = 1;
        // while (j <= i)
        // {
        //        char c = 'A'+j+i-2;
        //     cout << c << " ";
        //     c++;
        //     j++;
        // } // - Love Babbar

        cout << endl;
        i++;
    }
    */

    /*
    D
    C D
    B C D
    A B C D
    */
    
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1;
        while (j <= n)
        {
            char c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }

        // int j = 1;
        // char c = 'A' + n - i;
        // while (j <= i)
        // {
        //     cout << c << " ";
        //     c++;
        //     j++;
        // } // - Love Babbar
        cout << endl;
        i++;
    }
    */
}