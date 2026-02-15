#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Rotate Image (LeetCode 48)
    Approach: Transpose the matrix, then reverse each row
    Time Complexity : O(n * n)
    Space Complexity : O(1)
*/

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    for (auto &r : matrix) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
