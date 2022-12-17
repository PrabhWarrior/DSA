#include <iostream>
using namespace std;

int peakElementIndex(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s < e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else // if(arr[mid] > arr[mid - 1]) -- not a valid condition causes infinite loop
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
     return s;
}


int main()
{
    int arr[9] = {0, 1, 5, 6, 8, 10, 2, 1, 0};
    cout << "Peak element is at index " << peakElementIndex(arr, 9) << endl;
    return 0;
}