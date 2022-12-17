#include <iostream>
using namespace std;
// function signature
void printCounting(int n)
{ // function body
for (int i = 1; i <= n; i++)
{   
    cout << i << " ";
}
cout << endl;
    // return ; // kuch laike nhi ja reha nal bas vaps ja reha aitho
}
int main()
{
    int n;
    cin >> n;

    // function call
    printCounting(n);
    return 0;
}