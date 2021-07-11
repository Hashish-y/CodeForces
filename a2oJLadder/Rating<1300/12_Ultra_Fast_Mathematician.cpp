#include <bits/stdc++.h>
using namespace std;

int main(){

    string x, y, ans;
    cin >> x >> y;
    for(int i = 0; i < x.length(); i++){
        if(x[i] == '1' && y[i] == '1') {
            ans.push_back('0');
        }
        else if(x[i] == '0' && y[i] == '0'){
            ans.push_back('0');
        }
        else{ 
            ans.push_back('1');
        }
    }
    cout << ans << endl;
    return 0;
}