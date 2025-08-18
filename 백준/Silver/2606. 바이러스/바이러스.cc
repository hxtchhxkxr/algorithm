#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int v, e;	// 정점 : 컴퓨터의 수, 간선 : 연결되어 있는 쌍의 수
vector<int> adj[101];	// 무방향 그래프 인접리스트
bool vis[101];

void bfs() {
	queue<int> q;
	q.push(1);
	vis[1] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (auto nxt : adj[cur]) {
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
		}
	}
}

int main() {
	cin >> v >> e;

	for (int i = 0; i < e; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bfs();
	
	int cnt = 0;
	for (int i = 2; i <= v; i++) {
		if (vis[i]) cnt++;	// 방문한 정점 수 - 1(자기 자신 제외)
	}

	cout << cnt;
}