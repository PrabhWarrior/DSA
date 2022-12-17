#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    // 1 2 3 4 5 0 0 0 0 0
    int sizeArr = sizeof(arr) / sizeof(int);
    cout << sizeArr << endl; // can't find the length (actual numbers present)

    int arr1[10] = {0};
    // 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

    // int arr2[10] = {-1};
    // -1 0 0 0 0 0 0 0 0 0 // Not possible with -1

    int arr2[10];
    std::fill_n(arr2, 10, -1);
    // fill_n(arr2, 10, -1);
    // -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    printArray(arr2, 10);

    // cout << endl << arr1[10] << endl;  -- why printing why not error

    char arr3[5] = {'a', 'b', 'c'};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr3[i] << " ";
    // }
    // a b c

    double arr4[10];
    float arr5[10];
    bool arr6[10];
    return 0;
}