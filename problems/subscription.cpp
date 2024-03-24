#include <bits/stdc++.h>
using namespace std;

#define ll long long int;
#define ld long double;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int c;
        
        if (a%6 == 0)  c = a / 6;
        else c= a / 6 + 1;

        cout << c * b << "\n";
    }
    
    return 0;
}