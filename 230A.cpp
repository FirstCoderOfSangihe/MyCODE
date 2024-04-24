//Codeforces : Dragons

#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main() {
	
	int s,n; cin >> s >> n;
	
	pair <int,int> dragons[n+1];
//	int dragon[1001], a[n];
//	for( int i = 1; i <= n; i++) {
//		int x; cin >> x >> dragon[x];
//		a[i] = x;
//	}
//	sort(a+1, a+a.size());
//	
//	for( int i = 1; i <= a.length() ; i++) {
//		cout << a[i];
//	}

	for( int i = 0; i < n; i++) {
		cin >> dragons[i].fi >> dragons[i].se;
	}
	sort( dragons, dragons +n);
	
	for( int i = 0; i < n; i++) {
		
		if( s <= dragons[i].fi) {
		
			cout << "NO" << endl;
			exit(0);
		}
		else if( s > dragons[i].fi) {
			
			int y = dragons[i].se;
			s+=y;
		}
	}
	
	cout << "YES" << endl;
}
