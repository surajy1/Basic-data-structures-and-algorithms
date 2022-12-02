#include <bits/stdc++.h>
using namespace std;

/*******************************/
/* 
	Power of a number using iterative power
	(Binary Exponentiation) 
*/

int power(int base, int exp) {

	int res = 1;

	while (exp > 0)
	{
		if (exp & 1) //equivalent to if(exp % 2 != 0)
			res = res * base;

		base = base * base;
		exp = exp >> 1; //equivalent to exp = exp / 2;
	}

	return res;
}

// TC: O(log(n))
// SC: O(1)
/*******************************/

int main() {


	int base, exp;

	cin >> base >> exp;

	cout << power(base, exp);

	return 0;
}
