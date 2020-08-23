#include <iostream>
using namespace std;
#include <iomanip>      // std::setprecision
#include <cstdio>

int main(){
    int s;
    cin >> s;
    if (s>=95 && s<=100) cout << 1 << endl;
    else if (s>=90 && s<95) cout << 2 << endl; 
    else if (s>=85 && s<90) cout << 3 << endl; 
    else if (s>=80 && s<85) cout << 4 << endl; 
    else if (s>=70 && s<80) cout << 5 << endl; 
    else if (s>=60 && s<70) cout << 6 << endl; 
    else cout << 7 << endl;
    return 0;
}