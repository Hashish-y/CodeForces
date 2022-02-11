#include <bits/stdc++.h>
using namespace std;

string changeToUpper(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    string a,b;
    cin >> a >> b;

    a = changeToUpper(a) ;
    b = changeToUpper(b);

    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }

    return 0;

}
