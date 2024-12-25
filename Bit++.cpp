#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  
    int x = 0; 
    
    for (int i = 0; i < n; ++i) {
        string oper;
        cin >> oper;
    
        if (oper == "X++" || oper == "++X") {
            x++; 
        } else if (oper == "X--" || oper == "--X") {
            x--;
        }
    }
    
    cout << x << endl;
    
    return 0;
}
