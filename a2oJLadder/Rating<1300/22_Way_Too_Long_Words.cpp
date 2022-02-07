#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        int length = s.size();
        if(length > 10){
            cout << s[0] << length-2 << s[length-1];
        }
        else{
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
