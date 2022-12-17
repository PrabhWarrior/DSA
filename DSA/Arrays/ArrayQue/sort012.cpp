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

void sortOneTwo(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while ((arr[i] == 0 || arr[i] == 1) && i < j)
        {
            i++;
        }
        while (arr[j] == 2 && i < j)
        {
            j--;
        }

        if (arr[i] == 2 && (arr[j] == 0 || arr[j] == 1) && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    i = 0;
    j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while ((arr[j] == 2 || arr[j] == 1) && i < j)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[11] = {0, 2, 2, 1, 0, 1, 1, 0, 2, 1, 0};

    sortOneTwo(arr, 11);
    printArray(arr, 11);

    return 0;
}