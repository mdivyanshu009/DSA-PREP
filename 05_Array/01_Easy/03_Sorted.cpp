#include <iostream>
using namespace std;
/*  Problem: Checking array is sorted or not.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
bool checkSorted(int arr[],int n){
    for (int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n=7;
    int arr[] = {1,2,3,4,5,6,7};
    if (checkSorted(arr,n)){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
    return 0;
}
