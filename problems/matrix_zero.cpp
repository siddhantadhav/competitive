#include <bits/stdc++.h>
using namespace std;

template<typename T>
void printMatrix(T& mat, std::size_t R, std::size_t C) {
    for (std::size_t i = 0; i < R; ++i) {
        for (std::size_t j = 0; j < C; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

// Number of rows = matrix.size() i.e. number of internal arrays
// Number of cols = matrix[0].size() i.e. size of first array

// Brute Force

// void markCol(vector<vector<int>> &matrix, int row) {
//     int col_length= matrix.size();

//     for (int i=0; i<col_length; i++) {
//         if (matrix[i][row] == 0) {
//             matrix[i][row] = -1;
//         }
//     }
// }

// void markRow(vector<vector<int>> &matrix, int col) {
//     int row_length = matrix[0].size();

//     for (int i=0; i<row_length; i++) {
//         if (matrix[col][i] == 0) {
//             matrix[col][i] = -1;
//         }
//     }
// }

// void setZeros(vector<vector<int>> &matrix) {
//     int row = matrix[0].size();
//     int col = matrix.size();

//     for (int i=0; i<col; i++){
//         for (int j=0; j<row; j++) {
//             if (matrix[i][j] == 0){
//                 markCol(matrix, j);
//                 markRow(matrix, i);
//             }
//         }
//     }
// }

// Better approach

// void setZeros(vector<vector<int>> &matrix) {
//     int n = matrix[0].size();
//     int m = matrix.size();

//     int row[m] = {0};
//     int col[n] = {0};

//     for (int i=0; i<m; i++) {
//         for (int j=0; j<n; j++) {
//             if (matrix[i][j] == 0) {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }

//     for (int i=0; i<m; i++) {
//         for (int j=0; j<n; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

// Optimal approach

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool col0 = false;

    // Step 1: Mark the cells in the first row and first column
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][0] == 0) col0 = true;
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 2: Use the marks to set zeroes in the rest of the matrix
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Set the first row to zero if needed
    if (matrix[0][0] == 0) {
        for (int j = 1; j < cols; ++j) {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Set the first column to zero if needed
    if (col0) {
        for (int i = 0; i < rows; ++i) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

    setZeroes(matrix);
    printMatrix(matrix, matrix.size(), matrix[0].size());
    
    return 0;
}

