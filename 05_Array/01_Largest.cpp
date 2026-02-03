#include <iostream>
using namespace std;
/*  Problem: Finding Largest Element in A Given Array.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int findLargest(int arr[],int n){
    int largest=arr[0];
    for (int i=0;i<n;i++){
        if (largest < arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n=7;
    int arr[] = {1,3,2,4,2,6,3};
    cout << findLargest(arr,n);
    return 0;
}
