#include <iostream>
using namespace std;

int main(){

    int cost, money, banana;
    cin >> cost >> money >> banana;

    int t_cost, borrow;

    t_cost = cost * ( banana * ( banana + 1) / 2);
    borrow = t_cost - money;

    if (borrow < 0) {
        borrow = 0;
    }
    
    cout << borrow;

    return 0;
}