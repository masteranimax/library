// BFS
// Finds the distances and the connected componets

// Time complexity: O(v+e)

int d[MAX];
vector<vector<int> > g;

void bfs(int x) {
	queue<int> q;
	memset(d, -1, sizeof d);
	
	d[x] = 0;
	q.push(x);
	
	while (!q.empty()) {
		int s = q.front(); q.pop();
		for (auto u : g[s]) {
			if (d[u] != -1) continue;
			d[u] = d[s]+1;
			q.push(u);
		}
	}
}
