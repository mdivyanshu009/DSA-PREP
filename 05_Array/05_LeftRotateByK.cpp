#include <iostream>
using namespace std;
/*  Problem: Rotating an array right by k digits
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
void reverseArray(int nums[], int start ,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
void RightRotate(int nums[], int n, int k) {
    k=k%n;
    reverseArray(nums,0,n-1);
    reverseArray(nums,0,k-1);
    reverseArray(nums,k,n-1);
    }

int main(){
    int n=7,k=3;
    int nums[] = {1,2,3,4,5,6,7};
    RightRotate(nums,n,k);
    for (int i=0;i<n;i++){
        cout<< nums[i] << " ";
    }
    
    return 0;
}