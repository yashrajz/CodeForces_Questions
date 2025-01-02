#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int giftGivers[n];
    int receivers[n];

    for (int i = 0; i < n; i++) {
        cin >> giftGivers[i];
    }

    for (int i = 0; i < n; i++) {
        receivers[giftGivers[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << receivers[i] << " ";
    }
    cout << endl;

    return 0;
}
