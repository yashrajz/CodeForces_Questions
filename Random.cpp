#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count = 0;
    int oddcount = 0;
    int temp = n;

    while(temp>0){
        int digit = temp%10;
        count ++;
        if(digit % 2 != 0){
        //   cout<<digit<<endl;
            oddcount++;

        }
        temp = temp/10;
    }
    cout<<"Number of digits: "<<count<<endl;
    cout<<"Number of odd Digits: "<<oddcount<<endl;
    
}