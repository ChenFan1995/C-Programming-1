#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    char a[500],b[500];
    cin.getline(a,500);
    int j,i=0;
    int longestWord,prevLongestWord;
    int longestIdx;
    int count=0; 
    longestWord = 0;
    prevLongestWord = 0;
    while (a[i]!='.'){
        if (a[i]!=' '){
            longestWord = longestWord + 1;
        } else{
            if (prevLongestWord==0) { 
                prevLongestWord = longestWord;
            }else if (prevLongestWord!=0 && longestWord>prevLongestWord){
                prevLongestWord = longestWord;
            }
            longestWord = 0;
        }
        i++;
    } 
    if (longestWord > prevLongestWord){
        prevLongestWord = longestWord;
    }
    
    // Find first occurence
    i = 0; 
    while (a[i]!='.'){
        j = i;
        count = 0;
        while (j<i+prevLongestWord){
            if (a[j]!=' ') count ++; 
            j ++;
        }
        // cout << count << endl;
        if (count == prevLongestWord){
            longestIdx = j;
            break;
        }
        i ++;
    }
    for (int i=longestIdx-prevLongestWord;i<longestIdx;i++){
        cout << a[i];
    }
    cout << '\n';
    // cout << prevLongestWord << endl;
    // cout << longestIdx << endl;
    return 0;
}