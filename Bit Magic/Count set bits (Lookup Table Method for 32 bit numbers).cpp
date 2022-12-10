#include <iostream>
using namespace std;

/****************************/
// Lookup Table Method for 32 bit numbers

int table[256];

void initialize() {
	table[0] = 0;

	for (int i = 1; i < 256; i++)
		table[i] = (i & 1) + table[i / 2];
}

int countSetBits(int n) {

	int res = table[n & 0xff];
	n = n >> 8;

	res = res + table[n & 0xff];
	n = n >> 8;

	res = res + table[n & 0xff];
	n = n >> 8;

	res = res + table[n & 0xff];

	return res;
}

// TC: Theta(1)

/***************************/

int main() {

	int n;

	cin >> n;

	cout << countSetBits(n);

	return 0;
}
