
#include <iostream>
using namespace std;
void printdivisors(int n){
    cout << "Divisors Are:" << endl;
    for (int i=1; i*i<=n;i++){
        if(n%i==0){
            cout << i << endl;
            if (n/i!=i)
            {
           cout << n/i << endl;
            }
        }
        
        
    }
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    printdivisors(n);
    return 0;
}