#include <bits/stdc++.h>
using namespace std;
/*  Problem: Finding Second Largest Element in A Given Array.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int findSecondLargest(int arr[],int n){
    int largest= arr[0], slargest=INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            slargest = largest;
            largest=arr[i];
        }
        else if(arr[i]< largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main(){
    int n=7;
    int arr[] = {1,3,6,4,2,6,3};
    cout << findSecondLargest(arr,n);
    return 0;
}
