#include <iostream>
using namespace std;
/*  Problem: Rotating an array left by 1
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
void leftRotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n=7;
    int arr[] = {1,2,3,4,5,6,7};
    leftRotate(arr,n);
    for (int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    
    return 0;
}
