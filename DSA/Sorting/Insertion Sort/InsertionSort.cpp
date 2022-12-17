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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
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
                // ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void insertionSortWhile(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}
int main()
{
    int arr[] = {1, 5, 2, 3, 0};
    int arr1[] = {11, 50, 12, 3, 0};
    printArray(arr, 5);
    insertionSortWhile(arr, 5);
    printArray(arr, 5);

    cout << " " << endl;

    printArray(arr1, 5);
    insertionSortWhile(arr1, 5);
    printArray(arr1, 5);
    return 0;
}