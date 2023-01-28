// Leetcode 1910
#include <iostream>
using namespace std;
string removeOccurrences(string s, string part)
{
    string ans = "";
    string temp = "";
    int i = 0;
    while (i<s.length())
    {
        if (s[i] != part[0])
        {
            ans.push_back(s[i]);
            i++;
        }
        else
        {
            int j = 0;
            for (; j < part.length(); j++)
            {
                if(part[j] == s[i+j])
                {
                    j++;
                }
                else
                {
                    goto x;
                }
            }
            j = 0;
            for (; j < part.length(); j++)
            {
                s.r
            }
            i=i+j;

        }
        x:
        ans.push_back(s[i]);
        i++;
    }
    return ans;
}
int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s, part) << endl;
    return 0;
}