#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
    bool right = false, left = false, low = false, up = false;
        for(int j=0; j<n; j++){
            if((x[i] > x[j]) && (y[i] == y[j])){ right = true;}
            if((x[i] < x[j]) && (y[i] == y[j])){ left = true;}
            if((x[i] == x[j]) && (y[i] < y[j])){ low = true;}
            if((x[i] == x[j]) && (y[i] > y[j])){ up = true;}
            
        }
        if(right && left && up && low){ ans++;}
    }
    cout << ans << endl;
    return 0;
}