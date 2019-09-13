/*
The most useful graph algorihtms are search algorithms. DFS(depth first search) is one of them.

While running DFS, we assign colors to the vertices(initially white). Algorithm itself is really simple:

*/


dfs(v):
	color[v] = gray
	for u in adj[v]:
		if color[u] == white
			then dfs(u)
	color[v] = black


Black color is not used, but you can use it sometimes.

Time complexity is O(n+m)
