#include <iostream>
#include <algorithm>
using namespace std;

//int gcd( int a, int b) {
//	
//	if( b == 0){
//		return a;
//	}
//	else {
//		return gcd( b, a % b);
//	}
//}
//
//int lcm( int a, int b){
//	
//	int x = gcd( a,b);
//	return (a*b)/ x;
//}
//
//int main(){
//	
//	int a,b,c,n; cin >> a >> b >> c;
//	int Lcm = lcm(lcm(a,b),c);
//	
//	cin >> n;
//	for( int i = 0; i < n ; i++) {
//		int x; cin >> x;
//		
//		if( x % Lcm != 0){
//			cout << "TIDAK" << endl;
//		}
//		else{
//			cout << "YA" << endl;
//		}
//	}
//	
//	return 0;
//}

int main(){
	
	long long a,b,c,lcm = 0, MAX; cin >> a >> b >>c;
	MAX = max(max(a,b),c);
	
	lcm = MAX;
	while( lcm > 0) {
		
		if( lcm % a == 0 && lcm % b == 0 && lcm % c == 0) {
			break;
		}
		
		lcm += MAX;
	}
	
	int n; cin >> n;
	
	for( int i = 0; i < n; i++ ) {
		long long x; cin >> x;
		
		if( x % lcm == 0) {
			cout << "YA" << endl;
		}
		else {
			cout << "TIDAK" << endl;
		}
	}
	
	return 0;
}




