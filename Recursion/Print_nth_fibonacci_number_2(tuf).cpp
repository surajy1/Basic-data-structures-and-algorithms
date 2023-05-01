#include<iostream>
using namespace std;

// Print nth fibonacci number
// Input1: n = 4
// Output1: 3
// Input2: n = 8
// Output2: 21

int nthFact(int n) {
	if (n <= 1)
		return n;

	int last = nthFact(n - 1);
	int sLast = nthFact(n - 2);

	return last + sLast;
}
// TC: O(pow(2, n)), exponential
int main() {

	int n;
	cin >> n;

	cout << nthFact(n);

	return 0;
}
