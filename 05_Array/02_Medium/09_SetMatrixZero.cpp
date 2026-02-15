#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Set Matrix Zeroes (LeetCode 73)
    Approach: Use extra row & column marker arrays
    Time Complexity : O(m * n)
    Space Complexity : O(m + n)
*/

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> row(m, 0);
    vector<int> col(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    for (auto &r : matrix) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
