#include <iostream>
#include <algorithm>
using namespace std;
/*
	Given a rope of length n, 
	you need to find the maximum number of pieces
	you can make such that the length of every piece 
	is in set {a, b, c} for the given three values a, b, c.

	Input1: n=5, a=2, b=5, c=1
	Output1: 5  (5 pieces each of length 1)

	Input2: n=23, a=12, b=9, c=11
	Output2: 2 (a + b = 12 + 11 = 23)

	Input3: n=5, a=4, b=2, c=6
	Output3: -1 (Not possible)
*/
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
