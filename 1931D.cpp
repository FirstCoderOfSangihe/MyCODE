//Codeforces : Divisible Pairs
//3/4-2024

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t; cin >> t;
	while( t--) {
		
		int n,x,y,cnt = 0; cin >> n >> x >> y; 
		int a[n+5];
		
		for( int i = 1; i <= n; i++ ) {
			cin >> a[i];
		} 
		
		for( int i = 1; i <= n; i++ ) {
			for( int j = i+1; j <= n; j++ ) {
				
				int p = a[i] + a[j];
				int m = abs( a[i] - a[j]);
			
				if( p % x == 0 && m % y == 0){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
    return 0;
}

//tle
