#include <iostream>
using namespace std;

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector <int> > ans;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i+1; j <arr.size();j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin() , ans.end());
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 5, 6, 8};
    // vector<int> arr2 = {3, 5, 6, 7 ,8};

    vector<vector<int>> arr2 = pairSum(arr1 , 5);
    // for (int i = 0; i < arr3.size(); i++)
    // {
    //     cout << arr3[i] <<" ";
    // }
    

    return 0;
}