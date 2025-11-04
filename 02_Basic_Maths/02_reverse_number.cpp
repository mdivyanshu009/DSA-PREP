/*
Input Format: N = 389
Result: 
Reverse: 983
*/

#include <iostream>
using namespace std;

int main(){
    int n,digit,rev=0;
    cout << "Enter n:" ;
    cin >> n;
    while (n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout << "Reverse: " << rev;
    return 0;
}