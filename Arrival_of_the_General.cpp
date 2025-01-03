#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int heights[100];
    
    // Reading the heights
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    // Find the first occurrence of the maximum height
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[maxIndex]) {
            maxIndex = i;
        }
    }
    
    // Find the last occurrence of the minimum height
    int minIndex = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (heights[i] < heights[minIndex]) {
            minIndex = i;
        }
    }
    
    // Calculate swaps
    int swaps = maxIndex + (n - 1 - minIndex);
    
    // If maxIndex is after minIndex, reduce one swap as they overlap
    if (maxIndex > minIndex) {
        swaps--;
    }
    
    cout << swaps << endl;
    
    return 0;
}
