#include <iostream>
#include <algorithm>
using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(const Member& a, const Member& b) {
    return a.age < b.age;
}

int main() {
    int n;
    cin >> n;

    Member members[100000];

    for (int i = 0; i < n; i++) {
        cin >> members[i].age >> members[i].name;
    }

    stable_sort(members, members + n, compare);

    for (int i = 0; i < n; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}