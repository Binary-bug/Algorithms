/*
Lemma: If we run dfs(root) in a rooted tree, then v is  an ancestor of u iff st_v \le st_u \le ft_u \le ft_v.

so given arrays st and ft we can rebuild the tree.

*/

h[root] = 0
par[v] = -1
dfs(v):
	d[v] = h[v]
	color[v] = gray
	for u in adj[v]:
		if color[u] == white
			then par[u] = v and dfs(u) and d[v] = min(d[v],d[u])
			if(d[u] > h[v])
				then the edge v-u is a cut edge
		else if u ! = par[v]
			then d[v] = min(d[v],h[u])
	

// In this code, h[v] is the height of the vertex v in the tree and d[w] = min(h[w] where there is atleast vertex u in subtree of v in the dfs tree where there is an edge between u and w.

