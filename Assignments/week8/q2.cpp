#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int n;
    cin >> n;
    int a[n];
    double timeBike, timeWalk;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int j=0;j<n;j++){
        timeBike = a[j] / 3.0 + 27 + 23;
        timeWalk = a[j] / 1.2;
        if (timeBike < timeWalk){
            cout << "Bike" << endl;
        }else if(timeBike > timeWalk){
            cout << "Walk" << endl;
        }else{
            cout << "All" << endl;
        }
    }
}