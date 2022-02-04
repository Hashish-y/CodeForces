#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;

    int capacity = 0;
    int stillnow = 0;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        stillnow-=a;
        stillnow+=b;

        capacity = max(capacity, stillnow);
    }
    cout << capacity;

    return 0;
}