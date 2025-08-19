#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	int t;
	cin >> t;

	while (t--) {
		int board[52][52] = { 0 };
		bool vis[52][52] = { false };
		int cnt = 0;

		int m, n, k;
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 0 || vis[i][j]) continue;
				cnt++;

				queue<pair<int, int>> q;
				vis[i][j] = true;
				q.push({ i,j });

				while (!q.empty()) {
					pair<int, int> cur = q.front();
					q.pop();

					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;

						vis[nx][ny] = true;
						q.push({ nx,ny });
					}
				}
			}
		}

		cout << cnt << '\n';
	}
}