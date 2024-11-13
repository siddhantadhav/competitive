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


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << "hello world" << endl;
    
    return 0;
}