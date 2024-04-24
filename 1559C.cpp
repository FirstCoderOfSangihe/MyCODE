#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin >> t;
	
	while( t--) {
		
		int n; cin >> n; //sebenarnya n+1
		vector <int> adjList [n+2], line; 
		
		bool visited[n+2];
		stack <int> DFS;
		
		for ( int i = 1 ; i <= n ; i++) {
		
			if( i != n) adjList[i].push_back(i+1);
			
			int a; cin >> a;
			if( a == 0) {
				adjList[i].push_back(n+1);
			}
			else if( a == 1) {
				adjList[n+1].push_back(i);
			}
		}
			
		visited[1] = true;
		DFS.push(1);
		
		line.push_back(1);
//		cout << 1 << ' ';
		
		while ( !DFS.empty()) {
			
			int cur = DFS.top();
			DFS.pop();
			
			cout << cur << ' ';
			
			for ( int i = 1 ; i <= adjList[cur].size() ; i++ ){
				int next = adjList[cur][i];
				
				if( !visited[next]) {
					visited[next] = true;
					DFS.push(next);
					
//					line.push_back(next);
					
					cout << next << ' ';
				}
			}
		}
		cout << '\n';
		
	}
	
}
