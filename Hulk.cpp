#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string result = "";  // Initialize an empty string to hold the result
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            result += "I hate";  // Odd index: "I hate"
        } else {
            result += "I love";  // Even index: "I love"
        }
        if (i != n) {
            result += " that ";  // Add "that" if not the last phrase
        } else {
            result += " it";  // End with "it"
        }
    }
    
    cout << result << endl;  // Print the final result
    return 0;
}
