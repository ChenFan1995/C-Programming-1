#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int a[3];
    int n, x, y;

    for (int i=0;i<3;i++){
        cin >> a[i];    
    }

    n = a[0];
    x = a[1];
    y = a[2];

    // integer division gives an int
    if ((n - ceil(double(y)/x)) > 0){
        cout << int(n - ceil(double(y)/x));
    } else{
        cout << 0 << endl;
    }
    return 0;
}