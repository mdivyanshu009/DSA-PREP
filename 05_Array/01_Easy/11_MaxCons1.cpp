#include <iostream>
using namespace std;
/*  Problem: Finding Maximum consecutive 1s in A Given Array.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int max1s(int arr[],int n){
    int max1=0,count=0;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            count++;
            max1=max(max1,count);
        }
        else{
            count=0;
        }
    }
    return max1;
}


int main(){
    int n=7;
    int arr[] = {1,0,1,1,1,0,1};
    cout << max1s(arr,n);
    return 0;
}