#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Next Permutation (LeetCode 31)
    Approach: Greedy (Find breakpoint, swap, reverse suffix)
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), ind = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    for (int i = n - 1; i >= ind; i--) {
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    reverse(nums.begin() + ind + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
