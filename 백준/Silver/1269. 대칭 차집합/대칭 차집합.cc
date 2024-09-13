#include <iostream>
#include <set>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int* arrA = new int[a];
	int* arrB = new int[b];

	for (int i = 0; i < a; i++) 
		cin >> arrA[i];

	for (int i = 0; i < b; i++)
		cin >> arrB[i];

	set<int> setA(arrA, arrA + a);
	set<int> setB(arrB, arrB + b);

	set<int> intersection;

	for (const auto& elem : setA) {
		if (setB.find(elem) != setB.end()) {
			intersection.insert(elem);
		}
	}

	cout << setA.size() + setB.size() - 2 * intersection.size();

	delete[] arrA;
	delete[] arrB;

	return 0;
}