#include <iostream>
using namespace std;

int firstOcc(int arr[], int s, int e, int key,int ans)
{
    int mid = s + (e - s) / 2;

    if(s>e) return ans;

    if (arr[mid] == key)
    {
        ans = mid;
        return firstOcc(arr, s,mid-1,key,ans); // left part 
    }
    else if(arr[mid] < key)
    {
        return firstOcc(arr,mid+1, e, key,ans); // right part
    }
    else
    {
        return firstOcc(arr,s,mid-1,key,ans); // left part
    }
}

int lastOcc(int arr[], int s, int e, int key,int ans)
{
    int mid = s + (e - s) / 2;

    if(s>e) return ans;

    if (arr[mid] == key)
    {
        ans = mid;
        return lastOcc(arr, mid+1,e,key,ans); // left part 
    }
    else if(arr[mid] < key)
    {
        return lastOcc(arr,mid+1, e, key,ans); // right part
    }
    else
    {
        return lastOcc(arr,s,mid-1,key,ans); // left part
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 3, 3, 3, 3, 3, 4};
    int s = 0;
    int e = 9 - 1;
    int key = 3;
    int first = firstOcc(arr, s, e, key,-1);
    int last = lastOcc(arr, s, e, key,-1);

    cout << first << " " << last << endl;

    return 0;
}