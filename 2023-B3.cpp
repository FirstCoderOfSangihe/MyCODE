#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <int> adj[100001];
bool visited[100001];
priority_queue<int> bobot_pulau;
ll bobot[100001], biaya[100001];

void inputadj() {
	
	int u,v;
	cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
}

ll traversal( int n, ll b) { // n node, b bobot
	
	ll minimal = min(b, bobot[n]);
	for( int i = 1; i <= adj[n].size(); i++) {
		
		if( visited[adj[n][i-1]] == true) {
			continue;
		}
		else {
			
			visited[adj[n][i-1]] = true;
			ll t = traversal(adj[n][i-1], minimal);
			minimal = min(minimal, t);
		}
	}
	return minimal;
}

int main() {
	
	int n,m,k;
	cin >> n >> m >> k ;
	
	for( int i = 1; i <= n; i++ ) {
		cin >> bobot[i]; //kesulitan desa
	}
	for( int i = 1 ; i <= m; i++ ) {
		cin >> biaya[i]; //biaya perusahaan
	}
	sort(biaya+1, biaya+m+1);
	
	while( k--) {
		inputadj();
	}
	int cntd = 0;
	for( int i = 1; i <= n; i++) {
		if(visited[i]) {
			continue;
		}
		else {
			ll temp = traversal(i, bobot[i]);
			bobot_pulau.push(temp);
			cntd++;
		}
	}
	
	if(cntd > m) {
		cout << -1 << endl;
		return 0;
	}
	
	ll cnt = 0; 
	for( int i = 1; i <= cntd ; i++) {
		ll temp = biaya[i] * bobot_pulau.top();
		bobot_pulau.pop();
		cnt += temp;
	}
	
	cout << cnt;
}
