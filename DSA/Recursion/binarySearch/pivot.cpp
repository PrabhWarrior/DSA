#include <iostream>
using namespace std;
// not correct
int pivot(int arr[], int s, int e,int ans)
{   

    int mid = s + (e-s)/2;

    if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) return mid;

    if(arr[mid] >= arr[0])
    {
        return pivot(arr,mid + 1, e ,ans);
    }
    else
    {
        return pivot(arr,s,mid,ans);
    }

}

int main()
{
    int arr[6] = {8, 10, 17, 1};
    cout << "Pivot Index is " << pivot(arr, 0, 3,-1) << endl;

    return 0;
}

/*

int pivot(vector<int>& arr, int s, int e,int ans)
{   

    int mid = s + (e-s)/2;

    if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) return mid;

    if(arr[mid] >= arr[0])
    {
        return pivot(arr,mid + 1, e ,ans);
    }
    else
    {
        return pivot(arr,s,mid,ans);
    }

}

int binarySearch(vector<int>& arr,int s,int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    // int mid = (start + end) / 2; // int ki range se bahar if (2^31 - 1(start) + 2^31 - 1(end))

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // left wala part
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{   
    int pv = pivot(arr, 0, n-1, -1);
    if(arr[pv] <= k && arr[n-1]>=k)
    {
        return binarySearch(arr, pv,n-1,k);
    }
    else
    {
        return binarySearch(arr, 0,pv-1,k);
    }
}

*/