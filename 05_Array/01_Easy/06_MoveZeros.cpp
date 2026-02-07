#include <iostream>
using namespace std;
/*  Problem:Move all zeros to end
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
void Movezeros(int arr[],int n){
    int j=-1;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1) return;

    for (int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int n=7;
    int arr[] = {1,2,0,0,5,0,7};
    Movezeros(arr,n);
    for (int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    
    return 0;
}
