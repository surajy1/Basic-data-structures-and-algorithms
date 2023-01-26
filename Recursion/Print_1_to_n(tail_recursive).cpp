#include <iostream>
using namespace std;

// Tail recursive function to print 1 to N

void print1ToN(int n, int k) {
	if (n == 0)
		return;
	cout << k << " ";
	print1ToN(n - 1, k + 1);
}
// TC: O(n)
// Aux. Space: O(n)

int main() {

	int n;
	cin >> n;

	print1ToN(n, 1);

	return 0;
}
