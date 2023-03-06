#include <iostream>
using namespace std;
// starting from 0th stair
int countDistinctWays(int nStairs) {
    // base case
    if(nStairs < 0) return 0;
    if(nStairs == 0) return 1;

    // recursive relation
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countDistinctWays(n) << endl;

    return 0;
}