#include <iostream>
using namespace std;

// Recursive function to return log of a number
int logbase2(int n) {
	if (n == 1) // for logbase3 use `if (n < 3)`
		return 0;

	else
		return 1 + logbase2(n / 2); // for logbase3 use `return logbase3(n / 3);`
}

int main() {

	int n;
	cin >> n;

	cout << logbase2(n);

	return 0;
}
