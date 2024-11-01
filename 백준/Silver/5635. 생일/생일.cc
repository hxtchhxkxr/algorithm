#include <iostream>]
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int day;
    int month;
    int year;
};

bool compare(const Student& a, const Student& b) {
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

int main() {
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++) 
        cin >> students[i].name >> students[i].day >> students[i].month >> students[i].year;
    
    sort(students, students + n, compare);

    cout << students[n - 1].name << endl << students[0].name;

    return 0;
}