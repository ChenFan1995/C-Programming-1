#include <iostream>
using namespace std;
int main(){
    
    int a[100];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    while (n--){ //this is equivalent to while(n-->0)
        cout << a[n];
        if (n>0) cout<<" ";
    }
    // cout << '\n';
    return 0;
}