#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
    int r = 5;
    // double is gonna take some memory and can be changed later on, 
    // So to overcome that we are using macro
    // double pi = 3.14;
    double area = PI * r * r;

    cout << "Area is : " << area << endl;

    return 0;
}