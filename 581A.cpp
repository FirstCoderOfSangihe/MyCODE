//Codeforces : Vasya the Hipster

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a,b,cnt1 = 0, cnt2 = 0; cin >> a >> b;
	
	while (true) {
		
		if(a + b < 2) {
			break;
		}
		
		if( a > 0 && b > 0) {
			
			--a; --b;
			++cnt1;
		}
		else if( a == 0 || b == 0) {
			
			if( a != 0) {
				a-=2;
				++cnt2;
			}
			else if( b != 0) {
				b-=2;
				++cnt2;
			}
		} 
	}
	
	cout << cnt1 << ' ' << cnt2;
}
