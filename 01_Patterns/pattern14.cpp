/*
Input Format: N = 3
Result: 
A
A B
A B C
*/


#include <iostream>
using namespace std;
void nLetterTriangle(int n) {

    for (int i=0; i<n;i++)
    {
        for (char j='A'; j<='A'+i;j++){
            cout << j << " ";
        }
        cout<< endl;
    
    }
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}