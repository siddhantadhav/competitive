#include <bits/stdc++.h>
using namespace std;

int main() {
	clock_t tStart = clock();
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);

	// Array Creation

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << "\n";
	}

	fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);

	return 0;
}