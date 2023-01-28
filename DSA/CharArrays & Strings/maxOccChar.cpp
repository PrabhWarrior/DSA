#include <iostream>
#include <stdlib.h>
using namespace std;
// lexilogical smalleset character

int toLowerCase(char ch)
{
    int temp;
    if (ch >= 'a' && ch <= 'z')
    {
        temp = ch - 'a';
    }
    else
    {
        temp = ch - 'A';
    }
    return temp;
}

char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        arr[toLowerCase(str[i])]++;
    }

    int maxi = 0;
    int maxNumber = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            maxNumber = i;
            // cout << char(i+'a') << arr[i]<<" ";
        }
    }
    char finalAnswer = maxNumber + 'a';
    return finalAnswer;
}

int main()
{
    string s = "tesTsample";
    // maxOccuringChar(s);
    cout << getMaxOccuringChar(s) << endl;
    return 0;
}