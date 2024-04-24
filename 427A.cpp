//codeforces : police recruits
//3/4-2024

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, justice = 0; cin >> n; int x[n+5];
	vector <int> vc ;
	for( int i = 0; i < n ; i++){
		cin >> x[i];
	}
	for( int i = 0; i < n; i++){
		if( x[i] > 0){
			justice += x[i];
		}else if( x[i] < 0){
			
			if( i == 0){
				vc.push_back(x[i]);
			}
			else if( i != 0){
				
				if(justice == 0){
					vc.push_back(x[i]);
				}else if( justice > 0){
					
					justice += x[i]; //x[i] minus
				}
			}
		}
	}
	cout << vc.size();
	return 0;
//	cout << justice;
}
