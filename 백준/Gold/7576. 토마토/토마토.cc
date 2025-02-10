#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int box[1002][1002];
bool vis[1002][1002];
int day[1002][1002];	

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> box[i][j];
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (box[i][j] == 1) {
				vis[i][j] = true;
				Q.push({ i,j });
				day[i][j] = 0;
			}
			else if (box[i][j] == -1) {
				vis[i][j] = true;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int>cur = Q.front();
		Q.pop();

		for (int dir = 0;dir < 4;dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] || box[nx][ny] == -1) continue;

			vis[nx][ny] = true;
			day[nx][ny] = day[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}

	int result = 0;
	bool isRipen = true;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (day[i][j] > result)result = day[i][j];
			if (!vis[i][j]) {
				isRipen = false;
				break;
			}
		}
	}

	cout << (isRipen ? result : -1);
}