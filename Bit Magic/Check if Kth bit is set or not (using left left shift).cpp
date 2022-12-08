#include <iostream>
using namespace std;

/****************************/
// Check if Kth bit is set or not (using left shift <<)

bool isKthBitSet(int n, int k) {
	if (n & (1 << (k - 1)))
		return true;
	else
		return false;
}

/***************************/

int main() {

	int n, k;

	cin >> n >> k;

	isKthBitSet(n, k);

	return 0;
}
