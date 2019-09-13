// DFS tree is a rooted tree that is built like this

let T be a new tree
dfs(v):
	color[v] = gray
	for u in adj[v]:
		if color[u] == white
			then dfs(u) and  par[u] = v (in T)
	color[v] = black

There is no cross edges, it means if there is an edge between v and u, then v = par[u] or u = par[v].



