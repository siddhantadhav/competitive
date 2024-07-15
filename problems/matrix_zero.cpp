#include <bits/stdc++.h>
using namespace std;

#define ll long long int;
#define ld long double;

template<typename T>
void printMatrix(T& mat, std::size_t N, std::size_t M) {
    for (std::size_t i = 0; i < N; ++i) {
        for (std::size_t j = 0; j < M; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

// Brute Force

void markCol(vector<vector<int>> &matrix, int row) {
    int col_length= matrix.size();

    for (int i=0; i<col_length; i++) {
        if (matrix[i][row] == 0) {
            matrix[i][row] = -1;
        }
    }
}

void markRow(vector<vector<int>> &matrix, int col) {
    int row_length = matrix[0].size();

    for (int i=0; i<row_length; i++) {
        if (matrix[col][i] == 0) {
            matrix[col][i] = -1;
        }
    }
}

void setZeros(vector<vector<int>> &matrix) {
    int row = matrix[0].size();
    int col = matrix.size();

    for (int i=0; i<col; i++){
        for (int j=0; j<row; j++) {
            if (matrix[i][j] == 0){
                markCol(matrix, j);
                markRow(matrix, i);
            }
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

    int row = matrix[0].size();
    int col = matrix.size();

    for (int i=0; i<col; i++){
        for (int j=0; j<row; j++) {
            if (matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
    
    return 0;
}