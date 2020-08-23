#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;


int main(){
    int n;
    int count=0;
    int b,c,d,e;
    cin >> n;
    int a[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];     
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if ((i>=1 && i<n-1) && (j>=1 && j<n-1)){
                b = a[i][j+1] - a[i][j];
                c = a[i][j-1] - a[i][j];
                d = a[i+1][j] - a[i][j];
                e = a[i-1][j] - a[i][j];
                if (b>=50 && c>=50 && d>=50 && e>=50) {
                    count ++;
                }
            }
        }
    }         
    cout << count << endl;
    return 0;
}
