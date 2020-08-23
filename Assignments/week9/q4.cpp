#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;

int main(){
    int a[5][5];
    int temp1;
    int n,m;
    
    //cout<< setw(4)<< temp1[0] <<endl; //_ _ _ 1
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> a[i][j];     
        }
    }

    cin >> n >> m;
    if (n<0 || n > 4 || m<0 || m>4){
        cout << "error" << endl;
        return 0;
    }
    for (int j=0;j<5;j++){
        temp1 = a[m][j];
        a[m][j] = a[n][j];
        a[n][j] = temp1;
    }
    
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout << setw(4) << a[i][j];     
        }
        cout << '\n';
    }
    cout << '\n';
    return 0;
}