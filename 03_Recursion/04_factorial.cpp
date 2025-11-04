#include <iostream>
using namespace std;

int factn(int n){

    if (n == 1) { 
        
        return 1;
    }
  
    return n * factn(n - 1); 
    
}


int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    cout << "Fact: "<< factn(n); 
    return 0;
}