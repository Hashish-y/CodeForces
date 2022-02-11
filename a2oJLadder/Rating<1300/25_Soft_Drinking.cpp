#include <iostream>
using namespace std;

int main(){
    int n=0,k=0,l=0,c=0,d=0,p=0,nl=0,np=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = min((k*l/nl), (c*d));
    int b = min(a, (p/np))/n;

    cout << b;
}