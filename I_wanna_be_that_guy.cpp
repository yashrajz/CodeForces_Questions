#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    bool passed[101] = {false}; 
    
    for (int i = 0; i < p; i++) { // level of x
        int level;
        cin >> level;
        passed[level] = true;
    }
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) { // level of y
        int level;
        cin >> level;
        passed[level] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!passed[i]) {
            cout << "Oh, my keyboard!" << endl; 
            return 0;
        }
    }
    
    cout << "I become the guy." << endl; 
    return 0;
}
