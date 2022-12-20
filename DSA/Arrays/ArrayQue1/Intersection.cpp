// Two pointers approach
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> arr;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 5, 6, 8};
    vector<int> arr2 = {3, 5, 6, 7 ,8};

    vector<int> arr3 = findArrayIntersection(arr1, 6, arr2, 5);
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] <<" ";
    }
    

    return 0;
}