#include <iostream>
using namespace std;

// Print nth fibnacci number

int nthFib(int n) {
	if (n <= 1)
		return n;

	return nthFib(n - 1) + nthFib(n - 2);
}

int main() {

	int n;
	cin >> n;

	cout << nthFib(n);

	return 0;
}
