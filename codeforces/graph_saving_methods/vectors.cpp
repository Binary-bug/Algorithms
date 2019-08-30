/* It is the most common method for saving graph. For each vertex keep a vector of it's edges, now for each edge just save it in related vectors. Use pair(or another struct) for saving weighted graph. It works similarly for directed graph.
 

   Memory Usage: O(4m) = O(m) (note that vector uses more memory than you need).
   Time complexity: O(n+m) (for running dfs)
*/


#include <bits/stdc++.h>

using namespace std;

int n,m;

bool mark[maxn];

vector<int> G[maxn];

void dfs(int v){
	if(mark[v]) return;
	mark[v] = 1;
	for(auto u : G[v]) dfs(u);
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for(int i =0; i < m; i++){
		int v,u;
		cin >> v >> u;
		G[v].push_back(u);
		G[u].push_back(v);
	}
	return 0;
}
