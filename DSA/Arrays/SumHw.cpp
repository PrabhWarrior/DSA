#include <iostream>
using namespace std;

void getArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int arraySum(int arr[], int n)
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
    int arr1[100];
    cout << "Enter the size from range 1 to 100" << endl;

    // Inputing the size
    int size;
    cin >> size;

    cout << "Enter the elements in the array" << endl;
    getArray(arr1, size);

    cout << "The sum of the array is " << arraySum(arr1, size) << endl;

    return 0;
}