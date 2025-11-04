#include <iostream>
using namespace std;

int sumn(int n){

    if (n == 1) { 
        
        return 1;
    }
  
    return n+ sumn(n - 1); 
    
}


int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    cout << "Sum: "<< sumn(n); 
    return 0;
}