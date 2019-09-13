// BFS tree is a rooted tree built like this


let T be a new tree

BFS(v):
	for each vertex i
		do d[i] = inf
	d[v] = 0
	queue q
	q.push(v)
	while q is not empty
		u = q.front()
		q.pop()
		for each w in adj[u]
			if d[w] == inf
				then d[w] = d[u] + 1, q.push(w) and par[w] = u (in T)




