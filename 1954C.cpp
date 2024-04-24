//Codeforces : Long multiplication

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin >> t;
	
	while( t--) {
		
		int a,b; cin >> a >> b;
	
		int sizea =1, sizeb = 1;
		while( true ) { //mencari length a dan b
		
			if( a <= 9 && b <= 9) {
				break;
			}
		
			if( a >= 10) {
				a/=10;
				++sizea;
			}
		
			if( b >= 10) {
				b/=10;
				++sizeb;
			}
		}
		
		int A [sizea+1], B[sizeb+1];
		
		for( int i = 1 ; i <= sizea; i++ ) {
			
			
		}
	
//		cout << sizea << ' ' << sizeb;
	}
}
