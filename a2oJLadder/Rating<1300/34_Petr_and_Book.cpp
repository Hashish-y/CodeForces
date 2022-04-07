#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[7], i=0; 
    cin >> n;   
    for(int i=0; i<7; i++){cin >> arr[i];}  
    int x = arr[0];

    while(x < n){
        i++;
        i%=7;
        x += arr[i];
    }

    cout << i+1 << endl;
    return 0;
}