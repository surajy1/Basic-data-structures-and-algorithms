#include <iostream>
#include <algorithm>
using namespace std;

int maxPieces(int n, int a, int b, int c) {
	if (n == 0) return 0;
	if (n < 0) return -1;

	int res = max({maxPieces(n - a, a, b, c),
	               maxPieces(n - b, a, b, c),
	               maxPieces(n - c, a, b, c)
	              });

	if (res == -1)
		return -1;
	return res + 1;
}

// TC: O(3^n)
// Aux. space: O(3^n)
// Note: A better solution exists with dynamic programming

int main() {

	int n, a, b, c;

	cin >> n >> a >> b >> c;

	cout << maxPieces(n, a, b, c);

	return 0;
}
