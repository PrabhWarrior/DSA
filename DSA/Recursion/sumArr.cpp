#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    if (size == 0)
        return 0;

    return arr[0] + getSum(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    int sum = getSum(arr, size);
    cout << sum;

    return 0;
}