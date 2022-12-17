// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == K)
//                 {
//                     vector<int> temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     ans.push_back(temp);
//                 }
//             }
//         }
//     }
//     return ans;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, -1, -2, -3, 1, 2, 3};
    int n = 13;
    int K = 6;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && arr[j] == arr[j - 1])
                continue;
            for (int k = j + 1; k < n; k++)
            {
                if (k != j + 1 && arr[k] == arr[k - 1])
                    continue;
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}