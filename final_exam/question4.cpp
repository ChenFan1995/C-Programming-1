# include <iostream>
# include <math.h>
# include <cmath>

using namespace std;

int main(){

    char o;
    int a,b;
    //char a[3];
    //while(cin>>n){
    //for(int i=0;i<3;i++){
    //    cin >> a[i];
    //}
    //a[0] = a[0] - '0';
    //a[1] = a[1] - '0';
    cin >> a >> b >> o;    
    switch(o){
        case '+':
            cout << a+b<<endl;break;
        case '-':
            cout << a-b<<endl;break;
        case '*':
            cout << a*b<<endl;break;
        case '/':
            if(b == 0){ 
                cout <<"Divided by zero!"<<endl;
            }else{
                cout << a/b <<endl;
            }break;
        default:
            cout << "Invalid operator!"<<endl;
    }
    return 0;
}