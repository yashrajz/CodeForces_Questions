#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    int horseshoes[] = {s1, s2, s3, s4};
    sort(horseshoes, horseshoes + 4);
    
    int unique_count = 1; 
    for (int i = 1; i < 4; ++i) {
        if (horseshoes[i] != horseshoes[i-1]) {
            unique_count++;
        }
    }
    
    cout << 4 - unique_count << endl;
    
    return 0;
}
