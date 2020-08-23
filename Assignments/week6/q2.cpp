#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int h, r;
    float pi = 3.14159;
    cin >> h;
    cin >> r;
    cout << ceil(20/(pi*(r*r)*h*0.001)) << endl;
}