#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;
    bool required =false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=33 && s[i]<=126){
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
                required = true;
            }
        }
    }

    if(required){
        cout << "YES" ;
    }
    else{
        cout << "NO";
    }

    return 0;


    
}