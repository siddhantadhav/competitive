#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

void selection_sort(int *arr, int len) {
    int idx;

    for (int i= 0; i < len - 1; i++) {
    	idx = i;

    	for (int j = i+1; j < len; j++){
    		if (arr[j] < arr[idx]) {
    			idx= j;
    		}
    	}

    	if (idx != i) {
    		int temp= arr[idx];
    		arr[idx]= arr[i];
    		arr[i]= temp;
    	}
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[] = {4, 2, 3, 1};
    int len= sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, len);

    for (int i=0; i < len; i++){
    	cout << arr[i] << ' ';
    }
    
    return 0;
}
