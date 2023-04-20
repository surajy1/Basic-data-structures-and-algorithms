#include <iostream>
using namespace std;

/****************************/
// Check if the given number is a power of two
/*
Input1: 1
Output1: 1

Input2: 4
Output2: 1

Input3: 31
Output3: 0

Input4: 32
Output4: 1

Input5: 1024
Output5: 1

Input6: 2048
Output6: 1

Input7: 56
Output7: 0

Input8: 100
Output8: 0

Input9: 32
Output9: 1

Input10: 63
Output10: 0
*/
bool isPow2(int n) {
	return ((n & (n - 1)) == 0);
}

// TC: Theta(1)

/***************************/

int main() {

	int n;

	cin >> n;

	cout << isPow2(n);

	return 0;
}
