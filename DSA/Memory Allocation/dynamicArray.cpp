#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
    
}

int main()
{
    // char ch = 'a';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;


    // Variable size array
    int n;
    cin >> n;
    int *arr = new int[n];

    // taking input in array
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];  
    }

    int ans = getSum(arr, n);
    cout << "Answer is " << ans << endl;

    return 0;
}