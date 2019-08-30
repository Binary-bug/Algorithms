/*
   adjacency matrix.

   Simple, if graph is not weighted save in G[v][u] if tehre is an edge between v and u or not.

   if graph is weighted, if there is an edge between v and u save it's weight in g[v][u], save -1 otherwise.(if weight can be negative,
   use inf instead of -1).

   Memory usage: O(n^2)
   time complexity (for running dfs) : O(n^2)
*/


#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3+17;

int n,m;

bool G[maxn][maxn], mark[maxn];


void dfs(int v){
	if(mark[v]) return;
	mark[v] = 1;
	for(int u=0; u<n; u++){
		if(G[v][u]) 
			dfs(u);
	}
}


int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i =0; i < m; i++){
		int v,u;
		cin >> v >> u;
		G[v][u]=G[u][v]=1;
	}
	return 0;
}
