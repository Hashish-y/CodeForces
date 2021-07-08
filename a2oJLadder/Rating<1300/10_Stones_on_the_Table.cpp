#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i] == s[i+1]){
            sum++;
        }
    }
    cout << sum;
    return 0;
}