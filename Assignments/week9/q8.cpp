#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;

int main(){
    int L, M;
    int numTree=0;
    cin >> L >> M;
    bool a[L+1];
    int b[M][2];

    for (int i=0;i<L+1;i++){
        a[i] = true;
    }
    for (int i=0;i<M;i++){
        cin >> b[i][0] >> b[i][1];
        for (int j=b[i][0];j<b[i][1]+1;j++) {
            a[j] = false;
        }
    }
    for (int i=0;i<L+1;i++){
        if (a[i] == true) numTree ++;
    }
    cout << numTree << endl;
    return 0;
}