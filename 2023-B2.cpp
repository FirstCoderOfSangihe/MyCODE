#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main(){
	
	int n,m,k, cnt = 0; cin >> n >> m >> k; int a[n+5];
	for( int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	m+= k;
	for( int i = 0; i < n; i++){
		if( m < a[i]){
			m=a[i] + k;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

//	cout << a[i] <<' ';
