/*
Input Format: N = 389
Result: 
Count=3
*/


#include <iostream>
using namespace std;
void count_digits(int n){
    int count=0;
    while (n!=0){   //counts both negative and positive
        n=n/10;
        count++;
    } 
    cout << "Count: " <<  count;
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    count_digits(n);
    return 0;
}