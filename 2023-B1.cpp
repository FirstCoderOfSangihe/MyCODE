#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
	
	//deklarasi
	ll n,m; cin >> n >> m;
	ll sumA = 0, sumB = 0, AwalA = 0;
	ll b[m+1];
	
	//memasukkan input
	for( int i=1; i <= n; i++){
		int a; cin >> a;
		sumA += a;
	}
	
	AwalA = sumA;
	for( int i =1; i <= m; i++){
		cin >> b[i];
		sumB += b[i];
	}
	
	//sorting kentang di truk b
	sort(b+1, b+m+1, greater<int>());
	
	//cek jika tidak ambil apa"
	if( sumA * m > sumB * n){
		cout << 0;
		return 0;
	}else{ //iterasi satu per satu
		for( int i= 1; i < m; i++){
			sumA += b[i];
			sumB -= b[i];
			if(b[i] == b[i+1]) continue;
			if(sumA * (m-i) > sumB * (n+i)){
				cout << sumA - AwalA;
				return 0;
			}
		}
		cout << -1;
	}
}
