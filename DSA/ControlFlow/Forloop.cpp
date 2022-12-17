#include <iostream>
using namespace std;

int main()
{ /*
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;

  cout << "Printing count from 1 to n" << endl;
  int j = 1;
  for (;;)
  {
      if (j <= n)
      {
          cout << j << endl;
      }
      else
      {
          break;
      }
      j++;
  }

  for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
  {
      cout << a << " " << b << " " << c << endl;
  }
  */

    /*
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    */

    /*
    Fibonacci Series
    0 1 1 2 3 5 8 13 21 . . . . .
    */
    /*
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int a = 0;
    int b = 1;

    if (n >= 1)
    {
        cout << a << " ";
    }
    if (n >= 2)
    {
        cout << b << " ";
    }
    for (int i = 3; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
    */

    /*
    Prime Number
    1 ....... n
    */

    /*
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool check = 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime" << endl;
            check = 0;
            break;
        }
    }
    if (check)
    {
        cout << "Number is prime" << endl;
    }
    */

   // continue;

   for(int i = 0;i<5;i++)
   {
    cout<<"Hi"<<endl;
    cout<<"Hey"<<endl;
    continue;
    cout<<"Reply toh krde"<<endl; // Unreachable

   }
}