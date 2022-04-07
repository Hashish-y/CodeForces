#include <bits/stdc++.h>
using namespace std;

int main(){
    int friend_count=0, finger_friend, total=0, count=0;

    cin >> friend_count;
    for(int i=0; i<friend_count; i++){
        cin >> finger_friend;
        total+=finger_friend;
    }

    for(int i=1; i<=5; i++){
        if(((total-1)+i ) % (friend_count+1) != 0){
            count++;
        }
    }

    cout << count;
}