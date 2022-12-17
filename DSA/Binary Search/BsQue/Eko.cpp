// Lecture 15
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getValue(vector<int> &arr, int k, int mid)
{
    int sum = 0;
    int temp = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        temp = arr[i] - mid; 
        if(temp > 0)
        {
            sum+=temp;
        }
    }
    return sum;
}

int Eko(vector<int> &arr, int k)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = arr[n - 1];
    int temp = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        temp = getValue(arr, k, mid);
        if (temp == k)
        {
            return mid;
        }
        else if (temp > k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 42, 40, 26, 46};
    cout << Eko(arr, 20) << endl;

    vector<int> arr1 = {20, 15, 10, 17};
    cout << Eko(arr1, 7) << endl;
    return 0;
}
