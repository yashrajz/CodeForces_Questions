#include <iostream>
using namespace std;

bool hasDistinctDigits(int year) {
    int d1 = year % 10;
    int d2 = (year / 10) % 10;
    int d3 = (year / 100) % 10;
    int d4 = (year / 1000) % 10;
    return d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4;
}

int main() {
    int currentYear;
    cin >> currentYear;

    currentYear++;

    while (!hasDistinctDigits(currentYear)) {
        currentYear++;
    }

    cout << currentYear << endl;
    return 0;
}
