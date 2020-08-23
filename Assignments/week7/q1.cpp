#include <iostream>
using namespace std;
#include <iomanip>      // std::setprecision
#include <cstdio>

int main(){
    int n;
    cin >> n;
    int a[n];
    double g1=0, g2=0, g3=0, g4=0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i] <=18) g1++;
        else if (a[i] >= 19 && a[i]<=35) g2++;
        else if (a[i] >= 36 && a[i]<=60) g3++;
        else g4++;
    }  
    
    g1 = g1 / n * 100; 
    g2 = g2 / n * 100;
    g3 = g3 / n * 100;
    g4 = g4 / n * 100;

    //printf("%f \n",g1);
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "1-18: "  << g1 << '%' << endl;
    cout << "19-35: " << g2 << '%' << endl;
    cout << "36-60: " << g3 << '%' << endl;
    cout << "60-: " << g4 << '%' << endl;
    return 0;
}