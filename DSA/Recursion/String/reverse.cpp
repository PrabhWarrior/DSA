#include <iostream>
using namespace std;

void reverse(string &s, int i, int j)
{
    // base case
    if (i >= j)
        return;

    // Processing
    swap(s[i], s[j]);
    i++;
    j--;

    // Recurrence Call
    reverse(s, i, j);
}

void reverseUsing1Pointer(string &s, int i, int n)
{
    // base case
    if (i >= n - i - 1)
        return;

    // Processing
    swap(s[i], s[n - i - 1]);
    i++;

    // Recurrence Call
    reverseUsing1Pointer(s, i, n);
}

int main()
{
    string s = "Prabhkirat";
    // reverse(s, 0, s.length() - 1);
    reverseUsing1Pointer(s, 0, s.length());
    cout << s << endl;
    return 0;
}