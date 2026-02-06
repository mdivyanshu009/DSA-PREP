#include <bits/stdc++.h>
using namespace std;

/*  
Problem: Union of 2 sorted arrays  
Time: O(n1 + n2)  
Space: O(n1 + n2)  
*/

vector<int> FindUnion(int a[], int n1, int b[], int n2) {
    int i = 0, j = 0;
    vector<int> Unionn;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (Unionn.empty() || Unionn.back() != a[i]) {
                Unionn.push_back(a[i]);
            }
            i++;
        } 
        else {
            if (Unionn.empty() || Unionn.back() != b[j]) {
                Unionn.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (Unionn.empty() || Unionn.back() != a[i]) {
            Unionn.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (Unionn.empty() || Unionn.back() != b[j]) {
            Unionn.push_back(b[j]);
        }
        j++;
    }

    return Unionn;
}

int main() {
    int arr1[] = {1, 2, 3, 6, 7};
    int arr2[] = {1, 3, 4, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = FindUnion(arr1, n1, arr2, n2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
