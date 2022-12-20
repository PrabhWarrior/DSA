#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);

    for(int i = 0; i < n; i++)
    {
        temp[(i+k)%n] = nums[i];
    }
    // copy temp into nums vector

    nums = temp;

}

void printVector(vector<int> v)
{
    for(int i : v)
    {
        cout << i <<" ";
    }cout << endl;
}

int main()
{
    vector<int> v ={1,2,3,4,5,6,7};


    printVector(v);
    rotate(v,2);
    printVector(v);
    return 0;
}