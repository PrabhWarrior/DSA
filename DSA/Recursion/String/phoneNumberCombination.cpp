#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digits.length())
    {
        cout << output << " ";
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back(); // backtrack
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
        return ans;
    string output = "";
    int index = 0;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno",
                          "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);

    return ans;
}

int main()
{
    string str = "234";
    letterCombinations(str);
    return 0;
}