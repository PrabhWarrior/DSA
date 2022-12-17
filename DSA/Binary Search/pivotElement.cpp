#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n)
{
    int t = 0;
    int temp = 0;

    // for(int i : arr) // for each loop
    // {
    //     t+ = i;
    // }

    for (int i = 0; i < n; i++)
    {
        t += arr[i];
    }

    for (int i = 0; i < n; temp += arr[i++])
    {
        if (arr[i] == t - (2 * temp) )
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index is " << pivotIndex(arr, 6) << endl;

    return 0;
}