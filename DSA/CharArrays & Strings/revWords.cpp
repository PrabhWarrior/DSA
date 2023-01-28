#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

string reverseWords(string s)
{
    vector<string> arr;
    string temp = "";
    int i = 0;

    while (i < s.size())
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            while (s[i] != ' ' && i < s.size())
            {
                temp.push_back(s[i]);
                i++;
            }
            arr.push_back(temp);
            temp.clear();
        }
    }

    for (int i = arr.size() - 1; i >= 1; i--)
    {
        temp+=arr[i];
        temp+=" ";
    }
    temp+=arr[0];
    return temp;
}

int main()
{
    string s = "  the sky is   blue";
    // reverseWords(s);
    cout << reverseWords(s) << endl;

    return 0;
}