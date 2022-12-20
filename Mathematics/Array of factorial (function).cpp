#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define modulo 1000000007
/****************************/
/*
	Function for array of factorials
	of numbers 0 through 1000005
*/

const ll mx = 1000005;
ll fac[mx];

void preFac() {
	fac[0] = 1;

	for (ll j = 1; j < mx; j++)
	{	
		fac[j] = (j * fac[j - 1]);
		fac[j] %= modulo;
	}
}

// TC: O(mx)
// SC: O(mx)
/***************************/

int main() {

	preFac();

	// Test 1
	cout << fac[5] << "\n";

	// Test 2
	cout << fac[6];

	return 0;
}
