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

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // for round 1 to n - 1
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
        { // already sorted 
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 2, 3, 0};
    printArray(arr, 5);
    bubbleSort(arr, 5);
    printArray(arr, 5);

    return 0;
}