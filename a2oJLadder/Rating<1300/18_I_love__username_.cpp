//This question was done by mw from a2oJladder Q no 18 while I am practising CP.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0], amazing_1=0, amazing_2 = 0;
    for(int i=1; i<n; i++){
        if(max <arr[i]){
            amazing_1++;
            max = arr[i];
        }
        if(min > arr[i]){
            amazing_2++;
            min = arr[i];
        }
    }

    cout << amazing_1+amazing_2 << endl;

    return 0;

}
