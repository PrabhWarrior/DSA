#include <iostream>
using namespace std;
bool isPossibleSol(int arr[], int n, int k, int mid)
{
    int painterCount = 1;
    int boardSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || arr[i] > mid)
            {
                return false;
            }
            // boardSum = 0;
            // boardSum += arr[i];
            boardSum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards[],int n, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossibleSol(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << findLargestMinDistance(arr, 5, 3);

    return 0;
}