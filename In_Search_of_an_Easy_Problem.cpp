#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int opinions[n];

    for (int i = 0; i < n; i++) {
        cin >> opinions[i];
    }

    for (int i = 0; i < n; i++) {
        if (opinions[i] == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;

    return 0;
}
