#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
	string name;
	int korean;
	int english;
	int math;
};

bool compare(const student& a, const student& b) {
	if (a.korean != b.korean) return a.korean > b.korean;  
	if (a.english != b.english) return a.english < b.english; 
	if (a.math != b.math) return a.math > b.math;  
	return a.name < b.name;  
}

int main() {
	int n;
	cin >> n;

	vector<student> students(n);
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].korean >> students[i].english >> students[i].math;
	}

	sort(students.begin(), students.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << students[i].name << '\n';
	}
}