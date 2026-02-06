#include <iostream>
using namespace std;
/*  Problem: Finding Missing Element in A Given Array.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int missing(int arr[],int n){
    int sum=n*(n+1)/2;
    for (int i=0;i<n;i++){
        sum=sum-arr[i];
    }
    return sum;
}


int main(){
    int n=4;
    int arr[] = {4,3,1,0};
    cout << missing(arr,n);
    return 0;
}