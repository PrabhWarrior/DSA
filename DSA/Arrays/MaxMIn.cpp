#include <iostream>
using namespace std;

int getMax(int arr[] , int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi , arr[i]);
        // if(arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int getMin(int arr[] , int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini , arr[i]);
        // if(arr[i] < mini)
        // {
        //     mini = arr[i];
        // }
    }
    return mini;
}

int main()
{
    cout << "Enter the size ranges from 1 to 100" << endl;
    
    int size;
    cin >> size;
    // Bad practice
    // int arr[size]; // instead declare the array of 10000 size

    int arr[100];
    cout << "Enter the numbers in tha array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum value of the array is " << getMax(arr,size) <<endl;
    cout << "The minimun value of the array is " << getMin(arr,size) <<endl;
    

    return 0;
}