#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int a[6];
    int sum=0;
    for (int i=0;i<6;i++){
        cin >> a[i];
    }
    for (int j=1;j<6;j++){
        if (a[j] < a[0]){
            sum = sum + a[j];
        }
    }
    cout << sum << endl;
    return 0;
}