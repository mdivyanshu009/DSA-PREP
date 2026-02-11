#include <bits/stdc++.h>
using namespace std;

void leadersInArray(vector<int> a) {
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > maxi) {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }

    for (int i: ans){
        cout << i << " ";
    }

}

int main() {
    vector<int> a = {16, 17, 4, 3, 5, 2};
    leadersInArray(a);
    return 0;
}
