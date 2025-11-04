// for hcf euclidian algolrithm is used.
#include <iostream>
using namespace std;
int check_gcd(int a,int b){
    while(a>>0 && b>>0){

        if (a>b){
            a=a%b;
        }
        else {
            b=b%a;
        }
        if (a==0){
            return b;
        }
        else{
            return a;
        }
    }
}
int main(){
    int n1,n2;
    cout << "Enter n1 and n2:" ;
    cin >> n1;
    cin >> n2;
    cout << "Gcd is:" << check_gcd(n1,n2);
    return 0;
}