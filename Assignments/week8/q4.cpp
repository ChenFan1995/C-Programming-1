#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    int sum;   
    bool isThere = false;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }  
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum = a[i] + a[j];
            if (sum == k){
                cout << "yes" << endl;
                isThere = true;
                break;
            }
        }
        if (isThere) break;
    } 
    if (!isThere) cout << "no" << endl;
}