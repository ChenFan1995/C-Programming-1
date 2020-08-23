#include <iostream>
#include <cmath>  
using namespace std;

int main(){

    int score[6];
    int maxodd=1, c=0,mineven;

    for (int i=0;i<6;i++){
        cin >> score[i];       
    }

    for (int i=0;i<6;i++){
        
        if (c == 0 && score[i]%2==0){
            mineven = score[i];
            c = 1;
        }

        if (score[i] % 2 == 0 && score[i]<=mineven){
            mineven = score[i];
        }else if(score[i] % 2 != 0 && score[i]>=maxodd){
            maxodd = score[i];
        }
    }    
    cout << std::abs(maxodd-mineven) << endl;
    return 0;
}