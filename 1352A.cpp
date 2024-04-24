//Codeforces : Sum of Round Numbers
//3/4-2024

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	
	int n; cin >> n;
	
	for( int i = 0 ; i < n; i++) {
		
		vector <int> save;
		int a, cnt = 0; cin >> a;
		
		while( a > 0){
			
			if( a % 10){
				
				int ans = pow(10,cnt);
				ans *= (a% 10);	
				save.push_back(ans);
			} 	
			
			a/=10;
			++cnt;
			
		}
		cout << save.size() << endl;;
		for( int i = 0; i < save.size() ; i++ ){
			cout << save[i] << ' ';
		}
		cout << '\n';
		
	}
}
