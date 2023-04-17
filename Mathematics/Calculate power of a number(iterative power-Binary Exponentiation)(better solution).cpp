#include <bits/stdc++.h>
using namespace std;

/*******************************/
/* 
	Power of a number using iterative power
	(Binary Exponentiation) 
	
	Base1: 5
	Exp1: 2
	Ans: 25

	Base2: 2
	Exp2: 5
	Ans: 32

	Base3: 2
	Exp3: -1
	Ans: 0.5
	
	More test cases after main()
*/

double power(double base, int exp) {

	double res = 1.0;
	int n = abs(exp);

	while (n > 0)
	{
		if (n & 1) //equivalent to if(n % 2 != 0)
			res = res * base;

		base = base * base;
		n = n >> 1; //equivalent to n = n / 2;
	}
	if (exp > 0)
		return res;

	return double(1.0) / double(res);
}

// TC: O(log(n))
// SC: O(1)
/*******************************/

int main() {


	double base, exp;

	cin >> base >> exp;

	cout << power(base, exp);

	return 0;
}

/*
	Base4: 2
	Exp4: 2
	Ans: 4

	Base5: 9
	Exp5: 3
	Ans: 729

	Base6: 12
	Exp6: -2
	Ans: 0.00694444

	Base7: 5
	Exp7: -3
	Ans: 0.008

	Base8: 2
	Exp8: 10
	Ans: 1024
*/
