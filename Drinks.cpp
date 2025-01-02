#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int percentages[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> percentages[i];
        sum += percentages[i];
    }

    // Using regular floating point division without casting
    double average = sum * 1.0 / n;

    cout << fixed << setprecision(12) << average << endl;

    return 0;
}
