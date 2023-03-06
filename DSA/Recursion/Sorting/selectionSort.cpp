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

void Sort(int arr[], int i, int n)
{
    // base case
    if (i > n - 1)
        return;
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }
    swap(arr[i], arr[minIndex]);

    return Sort(arr, ++i, n);
}

int main()
{
    int arr[] = {4, 5, 2, 3, 8, 0};

    printArray(arr, 6);
    Sort(arr, 0, 6);
    printArray(arr, 6);

    return 0;
}