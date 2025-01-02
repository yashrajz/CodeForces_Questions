#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string result = "";
    
    // Iterate through each digit of both strings
    for (int i = 0; i < a.length(); i++) {
        // If the digits are the same, append '0', otherwise append '1'
        if (a[i] == b[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }

    cout << result << endl;

    return 0;
}

