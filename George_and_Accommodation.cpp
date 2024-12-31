#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentPeople, capacity;
    int availableRooms = 0;

    for (int i = 0; i < n; i++) {
        cin >> currentPeople >> capacity;
        
        if (capacity - currentPeople >= 2) {
            availableRooms++;
        }
    }

    cout << availableRooms << endl;
    return 0;
}
