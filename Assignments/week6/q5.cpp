#include <iostream>
#include <cmath>  
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a, b, c;
    
    a = n / 100;
    c = n % 10;
    b = (n-a*100)/10;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}