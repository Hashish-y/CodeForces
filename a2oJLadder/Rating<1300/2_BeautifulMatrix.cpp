#include <bits/stdc++.h>
#define Xopt 2
#define Yopt 2 
using namespace std;
 
int main() {
    bool matrix[5][5];
    int Xvalue, Yvalue; 
 
    for(int i = 0; i < 5; i++){ 
        for(int j = 0; j < 5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                Xvalue = i;
                Yvalue = j;
            }
        }
        cout<<endl;
    }
 
    int moves = abs(Xvalue - Xopt) + abs(Yvalue - Yopt);
    cout<<moves;
 
    return 0;
}
