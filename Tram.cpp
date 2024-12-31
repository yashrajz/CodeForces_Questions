#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int passengers = 0;
    int capacity = 0;

    for (int i = 0; i < n; ++i) {
        int exit, enter;
        cin >> exit >> enter;

        passengers -= exit;
        passengers += enter;
        
        if (passengers > capacity) {
            capacity = passengers;
        }
    }

    cout << capacity << endl;

    return 0;
}
