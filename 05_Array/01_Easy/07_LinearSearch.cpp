#include <iostream>
using namespace std;
/*  Problem: Finding Element in A Given Array.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int findElement(int arr[],int n, int k){
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
    }
    return -1;
}


int main(){
    int n=7,k=4;
    int arr[] = {1,3,2,4,2,6,3};
    cout << findElement(arr,n,k);
    return 0;
}