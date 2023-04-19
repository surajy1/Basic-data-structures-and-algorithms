#include <iostream>
using namespace std;

/****************************/
// Check if Kth bit is set or not (using left shift <<)
/*
	Input1: 5 4
	Output1: 0

	Input2: 5 3
	Output2: 1

	Input3: 5 2
	Output3: 0

	Input4: 5 1
	Output4: 1

	Input5: 8 4
	Output5: 1

	Input6: 8 3
	Output6: 0

	Input7: 10 5
	Output7: 0

	Input8: 10 4
	Output8: 1

	Input9: 10 2
	Output9: 1

	Input10: 11 1
	Output10: 1
*/

bool isKthBitSet(int n, int k) {
	if (n & (1 << (k - 1)))
		return true;
	else
		return false;
	
	// ALTRNATIVE
	// return ((n & (1 << (k - 1))) > 0);
}

/***************************/

int main() {

	int n, k;

	cin >> n >> k;

	cout << isKthBitSet(n, k);

	return 0;
}
