#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ll power(ll a, ll x) {

	if (x == 0)
		return 1;

	if (x % 2 == 0)
	{
		ll temp = power(a, x / 2) % mod;
		return (temp * temp) % mod;
	}

	else
	{
		ll temp = power(a, x / 2) % mod;
		return (a * temp * temp) % mod;
	}
}

int main() {

		cin >> n;

		cout << power(2, n - 1);

	return 0;
}
