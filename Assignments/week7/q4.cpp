#include <iostream>
using namespace std;
#include <iomanip>      // std::setprecision
#include <cstdio>

int main(){
    int n;
    cin >> n;
    int a[6];
    
    for (int i=0;i<6;i++){
        a[i] = 0;
    }

    // case 1 
    if (n>=1 && n<5){
        a[0] = n; 
    }

    // case 2
    if (n>=5 && n<10){
        a[0] = n-5;
        a[1] = 1;
    }

    //case 3
    if (n>=10 && n<20){
        a[2] = n/10;
        a[1] = (n-10)/5;
        a[0] = n - 10 - a[1] * 5; 
    }

    //case 4
    if (n>=20 && n<50){
        a[3] = n/20;
        n = n-a[3]*20;
        if (n>=10 && n<20){
            a[2] = n/10;
            a[1] = (n-10)/5;
            a[0] = n - 10 - a[1] * 5; 
        }
        else if (n>=5 && n<10){
            a[0] = n-5;
            a[1] = 1;
        }
        else if (n>=1 && n<5){
            a[0] = n; 
        }
    }

    // case 5
    if (n>=50 && n<100){
        a[4] = n / 50;
        n = n - a[4] * 50;
        if (n>=20 && n<50){
            a[3] = n/20;
            n = n-a[3]*20;
            if (n>=10 && n<20){
                a[2] = n/10;
                a[1] = (n-10)/5;
                a[0] = n - 10 - a[1] * 5; 
            }
            else if (n>=5 && n<10){
                a[0] = n-5;
                a[1] = 1;
            }
            else if (n>=1 && n<5){
                a[0] = n; 
            }
        }
        else if (n>=10 && n<20){
            a[2] = n/10;
            a[1] = (n-10)/5;
            a[0] = n - 10 - a[1] * 5; 
        }
        else if (n>=5 && n<10){
            a[0] = n-5;
            a[1] = 1;
        }
        else if (n>=1 && n<5){
            a[0] = n;   
        }
    }

    //case 6
    if (n>=100){
        a[5] = n/100;
        n = n - a[5] * 100;
        if (n>=50 && n<100){
            a[4] = n / 50;
            n = n - a[4] * 50;
            if (n>=20 && n<50){
                a[3] = n/20;
                n = n-a[3]*20;
                if (n>=10 && n<20){
                    a[2] = n/10;
                    a[1] = (n-10)/5;
                    a[0] = n - 10 - a[1] * 5; 
                }
                else if (n>=5 && n<10){
                    a[0] = n-5;
                    a[1] = 1;
                }
                else if (n>=1 && n<5){
                    a[0] = n; 
                }
            }
            else if (n>=10 && n<20){
                a[2] = n/10;
                a[1] = (n-10)/5;
                a[0] = n - 10 - a[1] * 5; 
            }
            else if (n>=5 && n<10){
                a[0] = n-5;
                a[1] = 1;
            }
            else if (n>=1 && n<5){
                a[0] = n; 
            }
        }
        else if (n>=20 && n<50){
            a[3] = n/20;
            n = n-a[3]*20;
            if (n>=10 && n<20){
                a[2] = n/10;
                a[1] = (n-10)/5;
                a[0] = n - 10 - a[1] * 5; 
            }
            else if (n>=5 && n<10){
                a[0] = n-5;
                a[1] = 1;
            }
            else if (n>=1 && n<5){
                a[0] = n; 
            }
        }
        else if (n>=10 && n<20){
            a[2] = n/10;
            a[1] = (n-10)/5;
            a[0] = n - 10 - a[1] * 5; 
        }
        else if (n>=5 && n<10){
            a[0] = n-5;
            a[1] = 1;
        }
        else if (n>=1 && n<5){
            a[0] = n; 
        }
    }

    for (int i=5;i>=0;i--){
        cout << a[i] << endl;
    }
    return 0;
}