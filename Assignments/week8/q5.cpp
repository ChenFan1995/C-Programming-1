#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int n,i;
    cin >> n;
    int a,b;

    i = 10;
    while (i<n){
        a = i / 10; 
        b = i % 10;
        if (i % (a+b) == 0) cout << i << endl;
        i = i + 1;
    }
}