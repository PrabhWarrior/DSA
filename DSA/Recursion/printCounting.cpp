#include <iostream>
using namespace std;

void printTail(int n)
{
    // base case
    if(n == 0) return;

    // processing
    cout << n << " ";

    // recurrence relation
    printTail(n-1);

}

void printHead(int n)
{
    // base case
    if(n == 0) return;

    // recurrence relation
    printHead(n-1);

    // processing
    cout << n << " ";


}

int main()
{
    int n;
    cin >> n;

    printTail(n);
    cout << endl;
    printHead(n);

    return 0;
}