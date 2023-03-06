#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] != 0) && (visited[x][y] == 0))
        return true;

    return false;
}
void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, string path, vector<vector<int>> &visited)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // 4 Choices D L R U

    // Down
    if (isSafe(m, n, x + 1, y, visited))
    {
        path.push_back('D');
        solve(m, n, ans, x + 1, y, path, visited);
        path.pop_back();
    }

    // Left
    if (isSafe(m, n, x, y - 1, visited))
    {
        path.push_back('L');
        solve(m, n, ans, x, y - 1, path, visited);
        path.pop_back();
    }

    // Right
    if (isSafe(m, n, x, y + 1, visited))
    {
        path.push_back('R');
        solve(m, n, ans, x, y + 1, path, visited);
        path.pop_back();
    }

    // Up
    if (isSafe(m, n, x - 1, y, visited))
    {
        path.push_back('U');
        solve(m, n, ans, x - 1, y, path, visited);
        path.pop_back();
    }

    visited[x][y] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{

    // visited matrix
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<string> ans;

    if (m[0][0] == 0)
        return ans;

    string path = "";
    int x = 0, y = 0;
    solve(m, n, ans, x, y, path, visited);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<vector<int>> m =
        {
            {1, 0, 0, 0},
            {1, 1, 0, 1},
            {1, 1, 0, 0},
            {0, 1, 1, 1}};

    vector<string> ans = findPath(m, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto ch : ans[i])
        {
            cout << ch;
        }
        cout << " ";
    }
    return 0;
}