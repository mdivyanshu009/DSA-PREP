#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Majority Element (LeetCode 169)
    Approach: Moore’s Voting Algorithm
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

int majorityElement(vector<int>& nums) {
    int el = 0;
    int cnt = 0;
    int check=0;

    for (int i = 0; i < nums.size(); i++) {
        if (cnt == 0) {
            el = nums[i];
            cnt = 1;
        }
        else if (nums[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    for (int i: nums){
        if (i==el){
            check++;
        }
    }
    if (check>nums.size()/2){
        return el;
    }
    else return -1;
    
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(nums);

    return 0;
}
