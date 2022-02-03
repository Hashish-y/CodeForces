//7th problem in codeforces which was ordered in a20JLadder for Rating < 1300 

#include <bits/stdc++.h>
using namespace std;

string change_to_up(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i]-=32;
        }
    }
    return s;
}

string change_to_down(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    int l=0, u=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            l++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            u++;
        }
    }


    if(l<u) {
        cout << change_to_up(s) << endl;
    }
    else{
        cout << change_to_down(s) << endl;
    }

    return 0;
}
