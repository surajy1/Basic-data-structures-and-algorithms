#include <iostream>
using namespace std;

/****************************/
// Check if Kth bit is set or not (using right shift >>)

bool isKthBitSet(int n, int k) {
	if ((n >> (k - 1)) & 1)
		return true;
	else
		return false;
}

/***************************/

int main() {

	int n, k;

	cin >> n >> k;

	cout << isKthBitSet(n, k);

	return 0;
}
