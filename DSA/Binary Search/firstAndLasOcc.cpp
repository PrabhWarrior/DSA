#include <iostream>
using namespace std;

// Left Side
int firstOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Right Side
int lastOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[9] = {1, 2, 3, 3, 3, 3, 3, 3, 4};

    int f = firstOcc(even, 9, 3);
    int l = lastOcc(even, 9, 3);
    int total = l - f + 1;
    cout << "First occurrence of 3 is at index " << f << endl;
    cout << "Last occurrence of 3 is at index " << l << endl;
    cout << "Total number of occurrence of 3 is " << total << endl;
}