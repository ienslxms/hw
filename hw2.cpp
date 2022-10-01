#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x, y, z;
    cout << "enter x";
    cin >>x;
    cout << "enter y";
    cin >>y;
    z=(fabs(x)-fabs(y))/(float)(1+fabs(x*y));
    cout <<"z="<<z;
    return 0;

}