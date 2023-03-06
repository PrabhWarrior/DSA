#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Sort(int arr[], int n)
{
    // base case
    if (n <= 1)
        return; // already sorted

    for (int i = 0; i < n - 1; i++)
    {
        // if (arr[i + 1] > arr[i]) // Descending Order Sorting
        if (arr[i + 1] < arr[i]) // Ascending Order Sorting
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    return Sort(arr, n - 1);
}

int main()
{
    int arr[] = {4, 5, 2, 3, 8, 0};

    printArray(arr, 6);
    Sort(arr, 6);
    printArray(arr, 6);

    return 0;
}