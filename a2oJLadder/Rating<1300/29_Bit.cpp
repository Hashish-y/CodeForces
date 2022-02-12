#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s[1] == '+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout << x;

    return 0;
}