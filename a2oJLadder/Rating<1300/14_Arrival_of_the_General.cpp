#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, smallest_index=0, largest_index=0, min=INT_MAX, max = INT_MIN;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] <= min){
            smallest_index = i;
            min = arr[i];
        }
        if(arr[i] > max){
            largest_index = i;
            max = arr[i];
        }
    }

    if(smallest_index < largest_index){
        cout << n-2-smallest_index+largest_index;
    }
    else
    {
        cout << n-1-smallest_index+largest_index;
    }

    return 0;
}