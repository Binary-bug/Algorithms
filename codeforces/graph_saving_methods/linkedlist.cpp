/*
This method is used when id of edges are important and works only for directed graphs(or if you can convert the undirected graph to directed). We use array for saving edges.

Then, for each vertex we keep index of last added edge and for each edge consider it's from From_i to To_i, we keep the index of last edge before this edge that From_index = From_i and name it prv_i. Then we can use head_v and prv array to find adjacency list.

Memore Usage : O(n + 3m) = O(n+m).
Time complexity for running dfs: O(n+m) 
*/

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6+17;
int n,m, from[maxn], to[maxn], head[maxn], prv[maxn];
bool mark[maxn];

void dfs(int v){
	if(mark[v]) return;
	mark[v] = 1;
	for(int e = head[v]; e!=-1; e = prv[e]) dfs(to[e]);
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	fill(head,head+n,-1);
	for(int i=0; i <m;i++){
		int v,u;
		cin >> v >> u;
		from[i] = v, to[i] = u;
		prv[i] = head[v];
		head[v] = i;
	}
	return 0;
}
