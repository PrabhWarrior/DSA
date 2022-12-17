#include<iostream>
using namespace std;

bool evenOdd(int a)
{
    if(a%2 != 0)
    {
        return 0;
    }
    return 1;

    // isEven
    // if(a & 1)
    // {
    //     return 0;
    // }
    // return 1;

}

int main(){
    int num;
    cin >> num;

    if(evenOdd(num))
    {
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    // cout<< 1300&1 <<endl;

return 0;
}