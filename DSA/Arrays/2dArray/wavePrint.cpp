#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int>  wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> result;
    for (int col = 0; col < mCols; col++)
    {
        if (col % 2 == 0)
        { // top to bottom
            for (int row = 0; row < nRows; row++)
            {
                result.push_back(arr[row][col]);
            }
        }
        else
        { // bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                result.push_back(arr[row][col]);
            }
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> vt = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout << "The Matrix :" << endl;
    printMatrix(vt, 3, 4);
    cout << endl;
    cout << "The Wave Form :" << endl;
    vector<int> result = wavePrint(vt, 3, 4);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}