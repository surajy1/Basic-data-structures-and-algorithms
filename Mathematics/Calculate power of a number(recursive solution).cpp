#include <bits/stdc++.h>
using namespace std;

/*******************************/
// Power of a number

int power(int base, int exp) {
	if (exp == 0)
		return 1;

	int temp = power(base, exp / 2);

	temp = temp * temp;

	if (exp % 2 == 0)
		return temp;
	else return temp * base;
}

// TC: Theta(log(n))
// SC: Theta(log(n))
/*******************************/

int main() {


	int base, exp;

	cin >> base >> exp;

	cout << power(base, exp);

	return 0;
}
