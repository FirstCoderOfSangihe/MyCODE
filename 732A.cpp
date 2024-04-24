//Codeforces : Buy a shovel

#include <bits/stdc++.h>
using namespace std;

int gcd( int a, int b) {
	
	if( b == 0) return a;
	
	return gcd( b , ( a % b));
}

int lcm( int a, int b) {
	
	int high = max(a,b);
	int low = min(a,b);
	
	for( int i = high; ; i+= high){
		if( i % low == 0){
			return i;
		}
	}
}

int main() {
	
	int k,r;
	cin >> k >> r;
	
	int x = k % 10;

	if( gcd(x,r) == 1) {
		cout << lcm(x,r) << endl;
	}
	else {
 
	}
}
