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

    int temp = arr[i];
    int j = i - 1;
    for (; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            // shift
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = temp;

    return Sort(arr, ++i, n);
}

int main()
{
    int arr[] = {4, 5, 2, 3, 8, 0};

    printArray(arr, 6);
    Sort(arr, 1, 6);
    printArray(arr, 6);

    return 0;
}