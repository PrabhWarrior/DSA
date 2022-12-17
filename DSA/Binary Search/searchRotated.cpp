// Famous Question
#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int k)
{
    int s = start;
    int e = end ;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else // if (k < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    // cout << pivot;
    // Second Line
    if (arr[pivot] <= k && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else // First Line
    {
        return binarySearch(arr, 0, pivot-1, k);
    }
}
int main()
{
    int arr[6] = {7, 8, 9, 1, 2, 5};
    cout << "The position of the element is at index " << findPosition(arr, 6, 5);
    return 0;
}