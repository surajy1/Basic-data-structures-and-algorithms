#include <iostream>
using namespace std;

/****************************/
// Count set bits
// (Brian Kerningam's Algorithm)

int countSetBits(int n) {
	int res = 0;

	while (n > 0)
	{
		n = (n & (n - 1));
		res++;
	}

	return res;
}

// TC: Theta(Set bit(s) count)

/***************************/

int main() {

	int n;

	cin >> n;

	cout << countSetBits(n);

	return 0;
}
