#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];

    vector<int> columns;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the size for column " << i << endl;
        int m;
        cin >> m;
        arr[i] = new int[m];

        columns.push_back(m);
        // To maintain the record of columns .. required when taking input and producing output
    }

    // Taking input
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < columns[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "The elements are : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < columns[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Realeasing
    for(int i=0; i<n; i++)
    {
        delete []arr[i];
    }

    delete []arr;



    return 0;
}