//Codeforces : New year and Hurry

#include <iostream>
using namespace std;

int main() {
	
	int n,k , cnt = 0; cin >> n >> k;
	k = 240 - k;
	
	for( int i = 1; i <= n; i++) {
		if( k<= 0) {
			break;
		}
		else {
			
			int y = i*5;
			
			if( k >= y) {
				k-= y;
				cnt++;
			}
			else {
				break;
			}
		}
	}
	
	cout << cnt;
}
