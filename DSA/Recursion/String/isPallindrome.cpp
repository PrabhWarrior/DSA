#include <iostream>
using namespace std;

// bool isPallindrome(string s, int i, int j)
// {
//     // base case
//     if (i >= j)
//         return true;

//     if (s[i] != s[j])
//         return false;
//     return isPallindrome(s, ++i, --j);
// }

bool isPallindrome1(string s, int i, int n)
{
    // base case
    if (i >= n - i - 1)
        return true;

    if (s[i] != s[n - i - 1])
        return false;
    return isPallindrome1(s, ++i, n);
}

int main()
{
    string s = "aabbccbbaa";
    // if (isPallindrome(s, 0, s.length()-1))
    if (isPallindrome1(s, 0, s.length()))
    {
        cout << "Given string is a Pallindrome" << endl;
    }
    else
    {
        cout << "Given string is not a Pallindorme" << endl;
    }
    return 0;
}