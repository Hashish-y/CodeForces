//3rd problem in codeforces which was ordered in a20JLadder for Rating < 1300 


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,t;
 
    string s;
    cin>>n>>t;
    cin >> s;
    while(t--) {
        for(int i=1; i<n; i++){
            if(s[i]=='G' && s[i-1]=='B') {
                s[i]='B';
                s[i-1]='G';
                i++;
            }
       }
    }
    
    cout<<s<<endl;
    return 0;
}