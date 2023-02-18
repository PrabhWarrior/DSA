#include <iostream>
using namespace std;

// global variable -- accessible through anywhere
int score = 15;

void a(int &i)
{
    cout << i << endl;
    cout << score << " in a " << endl;
}

void b(int &i)
{
    cout << i << endl;
    cout << score << " in b " << endl;
}

int main()
{   
    cout << score << " in main " << endl;
    score = 18; // global variable can be updated and changes will reflect in below functions
    int i = 5;
    a(i);
    b(i);

    // Limited scope inside these brackets only -- local variable Exampple
    {
        int i = 2;
        // cout << i << endl;
    }

    // cout << i << endl;

    return 0;
}