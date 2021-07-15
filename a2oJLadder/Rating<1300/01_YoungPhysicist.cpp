#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y, z, sum_1=0, sum_2=0, sum_3 =0;
	cin >> n;

	if(n>=1 && n<=100 ){
		while(n--){
			cin >> x >> y >> z;
			sum_1+=x;
			sum_2+=y;
			sum_3+=z;
		}
		if(sum_1==0 && sum_2==0 && sum_3==0){
			cout << "Yes" << endl;
		}
		else
			cout << "NO" << endl;
	}
}
