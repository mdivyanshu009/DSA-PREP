#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Spiral Matrix (LeetCode 54)
    Approach: Boundary Traversal (Top, Right, Bottom, Left)
    Time Complexity : O(m * n)
    Space Complexity : O(m * n)  // for the output vector
*/

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = n - 1, top = 0, bottom = m - 1;
    vector<int> ans;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = spiralOrder(matrix);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
