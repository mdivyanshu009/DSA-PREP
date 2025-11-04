
#include <iostream>
#include <cmath>
using namespace std;
bool check_armstrong(int n){
    int count=0,temp1=n,temp2=n,digit,sum=0;
    while (n>0){
        n=n/10;
        count++;
    }
    while (temp1>0){
        digit=temp1%10;
        sum+=(int)round(pow(digit,count));
        temp1/=10;
    }
    if (sum==temp2){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    if (check_armstrong(n)){
        cout << "Armstrong";
    }
    else{
        cout << "Not Armstrong";
    }
    return 0;
}