#include <iostream>
using namespace std;
/*  Problem: Longest Subarray with given Sum K(Positives)
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
int lsum(int arr[],int n,int k){
    int len=0,left=0,right=0;
    int sum=arr[0];
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if (sum==k){
            len=max(len,right-left+1);

        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    
    }
    return len;

}


int main(){
    int n=8,k=5;
    int arr[] = {1,2,3,1,1,1,1,1};
    cout << lsum(arr,n,k);
    return 0;
}