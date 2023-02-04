#include <iostream>
using namespace std;
// Linear Search
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}

void printColSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

void printSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void largestRowSum(int arr[][4], int row, int col)
{
    pair<int, int> pr = {-1, 0};
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > pr.second)
        {
            pr.first = i;
            pr.second = sum;
        }
    }
    cout << "The maximum row sum is " << pr.second << " and the row index is " << pr.first << endl;
}
int main()
{
    // creating 2d array
    // int arr[3][4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // cout << "Enter the elements" << endl;
    // row-wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // col-wise input
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    /*
        cout << "Enter the element you want to search " << endl;
        int target;
        cin >> target;

        if(isPresent(arr, target, 3, 4))
        {
            cout << "Element found" << endl;
        }
        else
        {
            cout << "Element not found" << endl;
        }
    */

    cout << "Row-Sum" << endl;
    printSum(arr, 3, 4);
    cout << "Col-Sum" << endl;
    printColSum(arr, 3, 4);
    largestRowSum(arr, 3, 4);
    return 0;
}