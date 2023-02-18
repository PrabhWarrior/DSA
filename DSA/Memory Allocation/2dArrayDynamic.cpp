#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of rows : " << endl;
    int row;
    cin >> row;

    cout << "Enter number of columns : " << endl;
    int col;
    cin >> col;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
    }
    // creation done!

    cout << "Enter the elements : " << endl;
    // taking input
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < col; i++)
    {
        delete []arr[i];
    }

    delete []arr;

    return 0;
}