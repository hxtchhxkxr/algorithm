#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;	 // (거리, 정점) pair

const ll INF = 1e10;	// 최대 비용
const ll MAX = 1002;	// 최대 도시 개수

ll d[MAX];	// 거리 배열
vector<pll> adj[MAX];	// 정점에 대해 연결된 정점들과 간선 가중치를 저장하는 인접 리스트
priority_queue<pll, vector<pll>, greater<pll>>pq;	// 가장 가까운 정점 뽑아 탐색하기 위한 용도

int main() {
	int n, m;
	cin >> n >> m;
	
	while (m--) {
		int start, end, cost;
		cin >> start >> end >> cost;
		adj[start].push_back({ end,cost });
	}

	int start, end;
	cin >> start >> end;

	// 거리 배열 최대 비용으로 초기화
	for (int i = 0; i <MAX; i++) {
		d[i] = INF;
	}

	// 시작 정점 삽입
	d[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty()) {
		pll top = pq.top();	// top = (거리, 정점)
		pq.pop();

		ll cd = top.first;	// current distance, 지금까지 계산된 시작점에서 현재 정점까지의 거리
		ll cur = top.second;	// current node, 현재 탐색 중인 정점 번호

		// 이미 최단거리이므로 건너뜀
		if (d[cur] < cd) {
			continue;
		}

		for (int i = 0; i < adj[cur].size(); i++) {
			ll next = adj[cur][i].first;
			ll cost = adj[cur][i].second;

			// 다음 정점이 최단거리이므로 건너뜀
			if (d[next] <= cd + cost) {
				continue;
			}

			// 방문 가능한 정점에 포함시킴
			d[next] = cd + cost;
			pq.push({ cd + cost,next });
		}
	}

	cout << d[end];
}