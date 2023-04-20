#include <iostream>
using namespace std;

/****************************/
// Count set bits
// (Brian Kerningam's Algorithm)
/*
	Input1: 5
	Output1: 2

	Input2: 10
	Output2: 2

	Input3: 11
	Output3: 3

	Input4: 31
	Output4: 5

	Input5: 21
	Output5: 3

	Input6: 32
	Output6: 1

	Input7: 1000
	Output7: 6

	Input8: 1024
	Output8: 1

	Input9: 2000
	Output9: 6

	Input10: 13
	Output10: 3
*/
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
