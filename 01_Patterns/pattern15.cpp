/*
Input Format: N = 3
Result: 
A B C
A B
A
*/


#include <iostream>
using namespace std;
void nLetterTriangle(int n) {

    for (int i=0;i<n;i++){
        for (char j='A';j<='A'+(n-i-1);j++)
        {
            cout << j << " ";
        }
        cout << endl;
            
    }
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}