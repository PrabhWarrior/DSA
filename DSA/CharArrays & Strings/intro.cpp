#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int length)
{
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (toLowerCase(arr[i++]) != toLowerCase(arr[j--]))
        {
            return 0;
        }
    }
    return 1;
}

void reverse(char name[], int length)
{
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        swap(name[i++], name[j--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0';

    int length = getLength(name);
    cout << "Your name is " << name << endl;
    cout << "Length " << length << endl;
    reverse(name, length);
    cout << "After Reverse " << name << endl;
    cout << "Palindrome or not " << checkPalindrome(name, length) << endl;

    cout << "Character is " << toLowerCase('b') << endl;
    cout << "Character is " << toLowerCase('G') << endl;
    return 0;
}