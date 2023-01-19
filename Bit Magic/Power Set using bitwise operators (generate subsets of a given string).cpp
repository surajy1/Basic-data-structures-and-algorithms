#include <iostream>
#include <math.h>
using namespace std;

/****************************/
/*
	Power Set using bitwise operators
	(generate subsets of a given string)
	Note: order of subsets printed doesn't matter

	Ex. 1:
	IP: "abc"
	OP: "", "a", "b", "c", "ab", "bc", "ac", "abc"
*/

void printPowerSet(string str) {
	int n = str.length();
	int powSize = pow(2, n);

	for (int counter = 0; counter < powSize; counter++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((counter & (1 << j)) != 0)
			{
				cout << str[j];
			}
		}
		cout << "\n";
	}
}

// TC: Theta(pow(2, n) * str.length())
// SC: Theta(pow(2, n))
/***************************/

int main() {

	string str;

	cin >> str;

	printPowerSet(str);

	return 0;
}
