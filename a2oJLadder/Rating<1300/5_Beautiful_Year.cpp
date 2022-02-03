//5th problem in codeforces which was ordered in a20JLadder for Rating < 1300 

#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    while (y < 1000 && y>9000);
	for (int i = y + 1;; i++){
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = (i / 100) % 10;
		int d = (i / 1000) % 10;
		if (a != b && b != c && c != d && a != c && b != d && a != d){
			cout << i << endl;
			break;
		}
	}
}


