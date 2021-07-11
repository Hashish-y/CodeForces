#include <bits/stdc++.h>
using namespace std;

double average(int a[], int n){
    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
 
    return (double)sum/n;
}

int main(){
    int n, sum =0;
    cin >> n;
    float avg;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << fixed;
    cout << setprecision(12);
    cout << average(arr, n) << endl;
}