#include <iostream>
using namespace std;

int main(){

    int bear, bro;
    cin >> bear >> bro;

    int yr = 0;

    while (bear <= bro){
        bear = 3 * bear;
        bro = 2 * bro;
        yr++;
    }

    cout << yr;
    
    return 0;
}