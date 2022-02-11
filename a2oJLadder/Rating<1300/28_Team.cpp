#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, count =0;
    cin >> n;
    while(n--){
        int l,m,n;
        cin >> l >> m >> n;

        if(l+m+n >=2){
            count++;
        }
    }

    cout << count;

    return 0;
}