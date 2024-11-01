#include <iostream>
#include <algorithm>
using namespace std;

struct Coordinate {
	int x;
	int y;
} coordinate;

bool compare(const Coordinate& a, const Coordinate& b) {
	if (a.x != b.x)
		return a.x < b.x;
	return a.y < b.y;
}

int main() {
	int n;
	cin >> n;

	Coordinate coordinate[100000];
	for (int i = 0; i < n; i++) {
		cin >> coordinate[i].x >> coordinate[i].y;
	}

	sort(coordinate, coordinate + n, compare);

	for (int i = 0; i < n; i++) {
		cout << coordinate[i].x << " " << coordinate[i].y << "\n";
	}

	return 0;
}