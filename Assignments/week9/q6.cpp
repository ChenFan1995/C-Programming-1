#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;


int main(){
    int n,m,temp;
    int count=0;
    cin >> n >> m;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    // for (int i=4;i>0;i--){
    //     cout << i << endl;
    // } -> 4,3,2,1

    for (int i=n-m;i<n;i++){
        for (int j=i;j>0+count;j--){
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
        }
        count ++;
    }
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}