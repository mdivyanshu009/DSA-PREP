
#include <iostream>
using namespace std;
void checkprime(int n){
    int count=0;
    for (int i=2; i*i<=n;i++){
        if(n%i==0){
            count++;
            if (n/i!=i)
            {
                count++;
            }
        } 
    }
    if (count==0)
    {
        cout << "Prime number";
    }
    else{
        cout << "Not Prime";
    }
    
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    checkprime(n);
    return 0;
}