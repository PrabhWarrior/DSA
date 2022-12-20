#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int size = nums.size();

        int i = 0;
        while (i < size - 1)
        {
            if (nums[i] == nums[i + 1])
            {
                ans.push_back(nums[i]);
                i = i + 2;
            }
            else
            {
                i = i + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> arr2 = {3, 3, 6, 7, 8, 5, 8, 6};

    vector<int> arr3 = obj.findDuplicates(arr2);

    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}