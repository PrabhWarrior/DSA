#include <iostream>
using namespace std;

// start -- optional i.e. default args
// condition -- only you can start from rightmost

// void print(int arr[], int n = 0, int start ) 
// not allowed like this.. firsty you have to take rightmost argument as default args
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr,size,2);

    return 0;
}