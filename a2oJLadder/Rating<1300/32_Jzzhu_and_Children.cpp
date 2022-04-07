#include<bits/stdc++.h>
using namespace std;

int main(){

    int pos,n,m,ar[102],child[102] = {0},i = 0;
    cin >> n >> m;
    bool flag = true;
    pos = n;
    for(int i = 0; i < n; i++)cin >> ar[i];
    while(flag){
        for(int i = 0; i < n; i++){
            ar[i] -= m;
            if(ar[i] > 0)pos = i+1;
        }
        for(int i = 0; i < n; i++){
            if(ar[i] > 0){
                flag = true;
                break;
            }
            else flag = false;
        }
    }
    cout << pos << endl;
    return 0;
}
