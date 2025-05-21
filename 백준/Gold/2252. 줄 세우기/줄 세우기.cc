#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;
const ll MAX = 32002;
const ll INF = 1e9;

ll idx[MAX];	// 정점 i로 들어오는 간선 개수 (indegree)
vector<ll> adj[MAX];	// 정점 i에서 갈 수 있는 정점 목록
queue<ll> q;	

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, m;
	cin >> n >> m;

	while (m--) {
		ll start, end;
		cin >> start >> end;
		adj[start].push_back(end);
		idx[end]++;
	}

	for (int i = 1; i <= n; i++) {
		if (!idx[i]) {
			q.push(i);
		}
	}

	while (!q.empty()) {
		ll cur = q.front();
		q.pop();

		cout << cur << " ";

		for (ll nxt : adj[cur]) {
			if (--idx[nxt] == 0) {
				q.push(nxt);
			}
		}
	}
}