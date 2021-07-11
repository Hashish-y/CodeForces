#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if( n % 2 == 1 ){
        cout << -1 <<endl;
    }
    else{
        int i, arr[101];
        for( i=1; i<=n; i++ ){
            if( i % 2 == 1 ){
                arr[i] = i + 1;
            }
            else{
                arr[i] = i - 1;
            }
        }
        for( i=1; i<n; i++ ){
            cout << arr[i] << " ";
        }
        cout << arr[i] << endl;
    }
    return 0;
}