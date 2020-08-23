# include <iostream>
# include <math.h>
# include <cmath>

using namespace std;

int main(){
    int n;
    double maxDis=0.0;
    cin >> n;
    double dis[n][2];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> dis[i][j];
        }   
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            float dist_temp = sqrt(pow(dis[i][0]-dis[j][0],2)
                                + pow(dis[i][1]-dis[j][1],2));
            if (dist_temp >=maxDis){
                maxDis = dist_temp; 
            }
        }
    } 
    cout << maxDis;
    return 0;
}