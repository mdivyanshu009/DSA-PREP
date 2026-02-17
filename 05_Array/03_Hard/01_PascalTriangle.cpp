#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Pascal’s Triangle (LeetCode 118)
    Approach: Generate each row using nCr relation
    Time Complexity : O(n^2)
    Space Complexity : O(n^2)
*/

vector<int> genrow(int row) {
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1);

    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansrow.push_back(ans);
    }

    return ansrow;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;

    for (int i = 1; i <= numRows; i++) {
        pascal.push_back(genrow(i));
    }

    return pascal;
}

int main() {
    int numRows = 5;

    vector<vector<int>> ans = generate(numRows);

    for (auto &r : ans) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
