#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int N,i;
    float SUM,K,P;
    //cin >> N;
    //cin >> K; 

    while (cin>>N>>K){
        i = 1;
        SUM = 0;
        P = 200;
        while (i<=20){
            SUM = SUM + N;
            if (SUM >= P){
                cout << i << endl;
                break;
            } 
            P = P * (1 + K/100);
            i = i + 1;
        }
        if (i>20) cout << "Impossible" << endl; 
    }
}