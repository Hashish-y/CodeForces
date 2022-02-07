#include <bits/stdc++.h>
using namespace std;

int count_distinct_letter(string s){
    int arr[128] = {'0'};
    int count = 0;

    for(int i=0; i<s.size(); i++){
        arr[s[i]] = 1;
    }

    for(int i=0; i<128; i++){
        count+=arr[i];
    }
    return count;
}

int main(){
    string s;
    cin >>s;
    if(count_distinct_letter(s) % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}