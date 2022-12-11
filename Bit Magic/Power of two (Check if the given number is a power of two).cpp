#include <iostream>
using namespace std;

/****************************/
// Check if the given number is a power of two

bool isPow2(int n) {
	return (n && ((n & (n - 1)) == 0));
}

// TC: Theta(1)

/***************************/

int main() {

	int n;

	cin >> n;

	cout << isPow2(n);

	return 0;
}
