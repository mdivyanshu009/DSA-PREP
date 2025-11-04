/*
Input: ‘N’ = 3

Output: 
A
B B
C C C
*/


#include <iostream>
using namespace std;
void alphaRamp(int n) {
    // Write your code here.
    for (char i = 'A'; i< 'A'+n;i++){
        for (char j='A';j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    alphaRamp(n);
    return 0;
}