#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prevMagnet, currMagnet;
    cin >> prevMagnet;  
    int groups = 1;  

    for (int i = 1; i < n; i++) {
        cin >> currMagnet;
        if (currMagnet != prevMagnet) {
            groups++; 
        }
        prevMagnet = currMagnet;
    }

    cout << groups << endl;
    return 0;
}
