#include <bits/stdc++.h>
using namespace std;

/*  
Problem: Union of 2 sorted arrays  
Time: O(n1 + n2)  
Space: O(n1 + n2)  
*/

vector<int> FindIntersection(int a[], int n1, int b[], int n2) {
    int i = 0, j = 0;
    vector<int> inter;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {

            i++;
        } 
        else if (b[j]<a[i]){
            j++;
        }
        else{
            inter.push_back(a[i]);
            i++;
            j++;
        }
    }



    return inter;
}

int main() {
    int arr1[] = {1, 2, 3, 6, 7};
    int arr2[] = {1, 3, 4, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = FindIntersection(arr1, n1, arr2, n2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
