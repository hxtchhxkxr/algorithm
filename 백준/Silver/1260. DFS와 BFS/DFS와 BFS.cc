#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, start;
vector<int> a[10001];
bool visited[10001];

void add(int s, int e) {
	a[s].push_back(e);
	a[e].push_back(s);
}

void dfs(int cur) {
	visited[cur] = true;
	cout << cur << ' ';
	for (auto nxt : a[cur]) {
		if (!visited[nxt]) dfs(nxt);
	}
}

void bfs(int st) {
	queue<int> q;
	q.push(st);
	visited[st] = true;

	while (!q.empty()) {
		int cur = q.front(); q.pop();
		cout << cur << ' ';
		for (auto nxt : a[cur]) {
			if (!visited[nxt]) {
				visited[nxt] = true;
				q.push(nxt);
			}
		}
	}
}

int main() {
	cin >> n >> m >> start;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		add(u, v);
	}

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(start);
	cout << '\n';

	fill(visited, visited + 10001, false);  // 방문 배열 초기화

	bfs(start);
}
