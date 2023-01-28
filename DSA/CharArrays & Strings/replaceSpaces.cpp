#include<iostream>
#include<stdlib.h>
using namespace std;
string replaceSpaces(string &str){
	string temp = "";
    for(int i = 0; i<str.length();i++)
    {
        if(str[i] == ' ')
        {
            temp+="@40";
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

// string replaceSpacesUsingSameString(string &str){
// 	int i = 0;
//     while(i<str.length())
//     {
//         if(str[i] == ' ')
//         {
//             str+="@40";
//             i+2;
//         }
//         else
//         {
//             i++;
//         }
        
//     }
//     return str;
// }
int main()
{
    string s = "Hello World Hi";
    // cout << "Enter the string" << endl;
    // getline(cin,s);

    cout << replaceSpaces(s);

}
