/*
This method is rarely used. For each vertex count edges connected to it at first, then allocate enough space for each vertex to save it's adjacency list.
*/


#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e6+17;
int n,m;

bool mark[maxn];

int *G[maxn], sz[maxn];

pair<int,int> edge[maxn];


void dfs(int v){
	if(mark[v]) return;
	mark[v] = 1;
	for(int i =0; i < sz[v]; i++) dfs(G[v][i]);

}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for(int i=0; i < m;i++){
		int v,u;
		cin >> v >> u;
		sz[v]++, sz[u]++;
		edge[i] = {v,u};
	}

	for(int i =1; i <=n; i++){
		G[i] = new int[sz[i]];
		sz[i] = 0;
	}
	for(int i = 0; i <m;i++){
		int v = edge[i].first, u = edge[i].second;
		G[v][sz[v]++] = u;
		G[u][sz[u]++] = v;
	}
	return 0;
}


