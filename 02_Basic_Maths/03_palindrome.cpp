/*
Input Format: N = 1221
Result: 
true
*/

#include <iostream>
using namespace std;

int main(){
    int n,digit,rev=0,temp;
    
    cout << "Enter n:" ;
    cin >> n;
    temp=n;
    while (n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if (temp==rev) {
        cout << "Palindrome";
    }
    else {
    cout << "Not Palindrome";
    }
    return 0;
}