#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

bool solve(vector<int> &rank, int m, int mid)
{
    int time = 0;
    int dish = 0;
    for(int i = 0; i < rank.size() ; i++)
    {
        time = rank[i];
        int j = 2;
        while(time <= mid)
        {
            dish++;
            time += j*(rank[i]);
            j++;
        }
        if(dish >= m)
        {
            return 1;
        }
    }
    return 0;
}
int minCookTime(vector<int> &rank, int m)
{
    int s = 0;
    int e = 1e5;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e)
    {
       if(solve(rank,m,mid))
       {
           ans = mid;
           e = mid - 1;
       }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
    
}

int main()
{
    vector<int> rank = {1,2,3,4};
    cout << minCookTime(rank,10);
    return 0;
}