# include <iostream>
# include <string>
using namespace std;

int main(){
    string str;
    int pos,lpos;
    char ll;
    
    //Split the string
    while(getline(cin,str)){
        for (int i=0;i<str.length();i++){
            if(str[i]==' '){
                pos = i;
            }
        }

        //Find the largest element
        char new_string[str.length()-1];
        ll = str[0];
        for(int i=0;i<pos;i++){
            if (str[i] > ll){
                ll = str[i];
            }
        }

        //Find the index of the first largest element
        for(int i=0;i<pos;i++){
            if (str[i] == ll){
                lpos = i;
            }
        }  

        for(int i=0;i<lpos+1;i++){
            if (str[i]==ll){
                new_string[i] = str[i];
                for(int j=0;j<(str.length()-pos-1);j++){
                    new_string[i+j+1] = str[pos+1+j];
                }
            }else{
                new_string[i] = str[i];
            }
        }
        
        for(int i=0;i<pos-lpos;i++){
            new_string[lpos+str.length()-pos-1+1+i] = str[lpos+1+i];
        }

        //cout << str.length() << endl;
        for(int i=0;i<str.length()-1;i++){
            cout << new_string[i];
        }
        cout << "\n";
    }
    return 0;
}