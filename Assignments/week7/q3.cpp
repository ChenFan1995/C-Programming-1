#include <iostream>
using namespace std;
#include <iomanip>      // std::setprecision
#include <cstdio>

int main(){
    // get N, k
    int N, k;
    int max,maxTemp,maxIdx,maxIdxTemp; 
    cin >> N;
    cin >> k;
    int a[N];

    // Read in numbers
    for (int j=0;j<N;j++){
        cin >> a[j]; 
    }

    maxIdx = 0;
    maxTemp = a[0];
    
    // loop k times to find kth largest number
    for (int i=0;i<k;i++){
        
        for (int j=0;j<N;j++){
            if (a[j]>=maxTemp && i==0){
                maxTemp = a[j];
                maxIdxTemp = j;
            }
            else if (a[j]>=maxTemp && a[j]<=max && j!=maxIdx){
                maxTemp = a[j];
                maxIdxTemp = j;
            } 
        }
        maxIdx = maxIdxTemp;
        max = maxTemp;

        // Find the first number that is smaller or equal to max
        // Only works when there are no duplicates
        for (int j=0;j<N;j++){
            if (a[j]<=max && j!=maxIdx){
                maxTemp = a[j];
                break;
            }
        }
        // cout << maxTemp << endl;
    }
    cout << max << endl;
    return 0;
}