# include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int count=0;
        int r[3];
        int a[3];
        int d[3];
        int cc;

        r[0] = 0;
        r[1] = 0;
        r[2] = 0;

        d[0] = 3;
        d[1] = 5;
        d[2] = 7;

        a[0] = n % 3;
        a[1] = n % 5;
        a[2] = n % 7;

        for (int i=0;i<3;i++){
            if (a[i] == 0){
                r[i] = d[i];  
                count++; 
                cc = d[i];
            } 
        }

        if (count == 3){
            cout << "3 5 7" << endl;
        }else if(count ==0){
            cout<< "n" << endl;
        }else if(count ==1){
            cout<< cc << endl;
        }else if(count == 2){
            for(int i=0;i<3;i++){
                if(r[i]!=0){
                    cout<< d[i];
                    cout<< " ";
                }
            }
            cout<< "\n";
        }
    }
    return 0;
}