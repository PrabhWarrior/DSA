#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> revArray(vector<int> &v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;

    int carry = 0;
    int sum;
    while (i >= 0 && j >= 0)
    {
        sum = a[i] + b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;

        ans.push_back(value);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        sum = a[i] + carry;
        carry = sum / 10;
        int value = sum % 10;

        ans.push_back(value);
        i--;
    }

    // second case
    while (j >= 0)
    {
        sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;

        ans.push_back(value);
        j--;
    }

    //  third case
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        int value = sum % 10;

        ans.push_back(value);
    }

    return revArray(ans);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> w = {1, 4, 3};

    vector<int> ans = findArraySum(v, v.size(), w, w.size());
    printVector(ans);
    return 0;
}