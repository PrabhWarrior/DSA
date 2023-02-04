/*
Matrix of n*n is rotated by 90 degree

1 2 3
4 5 6
7 8 9

7 4 1
8 5 2
9 6 3
*/


#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // swapping the [i][j] [j][i] elements of matrix once
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // column-wise swaping (reversing columns basically)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    printMatrix(matrix);
    cout << endl;
    rotate(matrix);
    printMatrix(matrix);
    return 0;
}