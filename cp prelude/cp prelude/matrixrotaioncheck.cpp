#include <bits/stdc++.h>
using namespace std;

bool isValidMatrix(vector<vector<int>> &matrix, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            // Check condition: Elements of adjacent rows in the same column should match
            if (matrix[i][j] != matrix[i + 1][(j+1)%n]) {
                return false;
            }
        }
    }
    return true;
}

int main() {

     int n = 3; // Size of the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {3, 1, 1},
        {2, 3, 1}
    };
    if (isValidMatrix(matrix, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
