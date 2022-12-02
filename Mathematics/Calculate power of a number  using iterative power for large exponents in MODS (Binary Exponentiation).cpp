#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*******************************/
/*
	Power of a number 
	using iterative power
	for large exponents
	in mods
	(Binary Exponentiation)
*/

int power(int base, int exp, int mod) {

	int res = 1;

	while (exp > 0)
	{
		if (exp & 1) //equivalent to if(exp % 2 != 0)
			res = (res * base) % mod;

		base = (base * base) % mod;
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

	int mod = 10000007; //changes according to problem

	cout << power(base, exp, mod);

	return 0;
}
