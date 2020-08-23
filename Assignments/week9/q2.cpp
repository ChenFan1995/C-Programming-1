#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    char a[80],b[80];
    cin.getline(a,80);
    cin.getline(b,80);
    int i=0;
    
    //cout << a[4] << endl; -> empty
    //cout << ('o' > ' ') << endl; -> 1 
    //cout << ('o' > '\0') << endl; -> 1
    //cout << ('H' < 'h') << endl; -> 1 
    //cout << tolower('H') << endl; -> 104 
    //cout << int('H') << endl; -> 72
    //cout << int('h') << endl; -> 104
    // cout << (tolower(a[0]) == tolower(b[0])) << endl; -> 1

    while (a[i]!='\0' && tolower(a[i])==tolower(b[i])){
        i++;    
    }
    if (tolower(a[i]) > tolower(b[i])){
        cout << '>' << endl;
    } else if (tolower(a[i]) < tolower(b[i])){
        cout << '<' << endl;
    } else {
        cout << '=' << endl;
    }
 }