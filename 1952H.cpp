#include <iostream>
using namespace std;

//void palindrome( string a){
//	
//	int m = a.length(), bool cek;
//	if( m % 2 == 0){
//		for( int i = 0, j = m-1; i < m/2 && j >= m/2 && i++; j-- ){
//			if( a[i] == a[j]){
//				
//			}
//		}
//	} 
//}
//
//int main(){
//	
//	int n; cin >> n;
//	for( int i = 0; i < n; i++){
//	
//	}
//}

int main(){
	string a; cin >> a; 
		
	int m = a.length(); bool cek;
	if( m % 2 == 0){
		for( int i = 0, j = m-1; i < m/2 && j >= m/2 && i++; j-- ){
			cout << a[i] << a[j] << ' ';
		}
	} 
}
