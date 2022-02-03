//8th problem in codeforces which was ordered in a20JLadder for Rating < 1300 

#include <iostream>
using namespace std;


int  main(){
    string s;
    cin >>s;

    if(s[0]>='a' && s[0] <='z'){
        s[0]-=32;
    }

    cout << s;
    return 0;
}
