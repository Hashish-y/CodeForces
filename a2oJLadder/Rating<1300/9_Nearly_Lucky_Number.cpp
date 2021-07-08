#include <bits/stdc++.h>
using namespace std;


int main() {
	long long int a,x;
	int y=0;
	cin>>a;

	while(a){
        x=a%10;
	    if(x==4 || x==7)
		    y++;
	 a=a/10;
	}
	if(y==4||y==47||y==74||y==44||y==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	
return 0;		
}