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
        while (j <= n)
        {
            if (n - i + 1 == j)
            {
                while (j <= n)
                {
                    cout << "*" << " ";
                    j++;
                }
            }
            else
            {
                cout << "  ";
                j++;
            }
        }
        i++;
        cout << endl;

        // // Space print kralo
        // int space = n-i;
        // while(space)
        // {
        //     cout<<"  ";
        //     space--;
        // }

        // // Stars print kralo
        // int j = 1;
        // while(j<=i)
        // {
        //     cout<<"*"<<" ";
        //     j++;
        // }
        // i++;
        // cout<<endl;

    }
    */

   /*
   * * * *
   * * *
   * *
   * 
   */
  /*
  int n;
  cin >> n;
  
  int i = 1;
  while(i<=n)
  {
    int j = 1;
    while(j <= n-i+1)
    {
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i++;
  }
  */

 /*
 * * * *
   * * *
     * *
       *
 */
  
  /*
  int n;
  cin>>n;

  int i = 1;
  while(i<=n)
  {
    int space = i-1;
    while(space)
    {
        cout<<"  ";
        space--;
    }
    int j=1;
    while(j <= n-i+1)
    {
        cout<< "*" <<" ";
        j++;
    }
    cout<<endl;
    i++;
  }
  */

 /*
 1 1 1 1
   2 2 2
     3 3
       4
 */
 
 /*
  int n;
  cin>>n;

  int i = 1;
  while(i<=n)
  {
    // space
    int space = i-1;
    while(space)
    {
        cout<<"  ";
        space--;
    }

    // numbers 
    int j = 1;
    while(j <= n-i+1)
    {
        cout<< i << " ";
        j++;
    }
    cout<<endl;
    i++;
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
  cin>>n;

  int i = 1;
  while(i<=n)
  {
    // space
    int space = n-i;
    while(space)
    {
        cout<<"  ";
        space--;
    }

    // numbers 
    int j = 1;
    while(j <= i)
    {
        cout<< i << " ";
        j++;
    }
    cout<<endl;
    i++;
  }
  */

   /*
   1 2 3 4
     2 3 4
       3 4
         4
   */

  /*
  int n;
  cin>>n;

  int i = 1;
  while(i<=n)
  {
    // space
    int space = i-1;
    while(space)
    {
        cout<<"  ";
        space--;
    }

    // numbers
    int j = i;
    while(j <= n)
    {
      cout<< j <<" ";
      j++;
    }
    cout<<endl;
    i++;

  }
  */

 /*    1
     3 2
   4 5 6
 7 8 9 10
 */
 
 /*
 int n;
 cin >> n;
 int count = 1;
 int i = 1;
 while(i <= n)
 {
  // Space
  int space = n-i;
  while(space)
  {
    cout<<"  ";
    space--;
  }

  int j=1;
  while(j<=i)
  {
    cout<<count<<" ";
    count++;
    j++;
  }
  cout<<endl;
  i++;
 }
 */




}