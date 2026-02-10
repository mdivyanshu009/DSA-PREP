#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Rearrange Array Elements by Sign (LeetCode 2149)
    Approach: Two Indices (place positives at even, negatives at odd)
    Time Complexity : O(n)
    Space Complexity : O(n)
*/

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr(n, 0);
    int posindex = 0, negindex = 1;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            arr[posindex] = nums[i];
            posindex += 2;
        } else {
            arr[negindex] = nums[i];
            negindex += 2;
        }
    }
    return arr;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
