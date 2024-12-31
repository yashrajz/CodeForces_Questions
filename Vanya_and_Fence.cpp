#include <iostream>
using namespace std;

int main() {
    int numFriends, fenceHeight;
    cin >> numFriends >> fenceHeight;
    
    int totalWidth = 0;
    for (int i = 0; i < numFriends; ++i) {
        int friendHeight;
        cin >> friendHeight;
        
        if (friendHeight > fenceHeight) {
            totalWidth += 2;
        } else {
            totalWidth += 1;
        }
    }
    
    cout << totalWidth << endl;
    return 0;
}
