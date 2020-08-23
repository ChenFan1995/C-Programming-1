#include <iostream>
using namespace std;

int main(){
    int a[10];
    for (int i=0;i<10;i++){
        cin >> a[i];
    }

    //Put odd to the left, even to the right
    int l=0, r = 9;

    //Continuously search until finding the first pair of not odd and not right numbers
    // [2,4,6,3,5,7] -> [3,5,7,2,4,6]
    while(l<=r){
        bool leftIsOdd = a[l] % 2 == 1;
        bool rightIsEven = a[r] % 2 == 0;
        // if left is odd, move to the next number
        if (leftIsOdd){
            l++;
        } else if(rightIsEven){
            // if left is not odd and right is even,
            // move to the previous number 
            r--;
        } else if(!leftIsOdd && !rightIsEven){
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    //At the end, l =3, r = 2 for previous example
    // Perform bubble search for left and right data
    int start=0, end=l;
    for (int i=start;i<end-1;i++){
        for (int j=start+1; j<start+end-i;j++){
            if (a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
        
    }

    start = l, end=10;
    for (int i=start;i<end-1;i++){
        for (int j=start+1;j<start+end-i;j++){
            if (a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    for (int i=0;i<10;i++){
        cout<<a[i]<<' ';
    }
}