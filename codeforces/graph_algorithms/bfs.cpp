/*
BFS is another search algorithm(Bread First Search). It is usually used to calculate the distances from a vertex v to all other vertices in unweighted garphs.
*/

bfs(v):
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
				then d[w] = d[u] + 1, q.push(w)

/*
distance of vertex u from v is d[u]

time complexity : O(n+m)

*/
