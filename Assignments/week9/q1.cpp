#include <iostream>
using namespace std;

int main(){
    char s[80];
    int count[5] = {0,0,0,0,0};
    cin.getline(s,80);
    for (int i=0;i<80;i++){
        if (s[i]=='a') count[0]++;
        else if (s[i]=='e') count[1]++;
        else if (s[i]=='i') count[2]++;
        else if (s[i]=='o') count[3]++;
        else if (s[i]=='u') count[4]++;
    }
    for (int j=0;j<5;j++){
        cout << count[j] << " ";
    }
    cout << '\n';
}
