#include <iostream>
using namespace std;

int digSum(int n) {

	if (n == 0)
		return 0;

	return (n % 10) + digSum(n / 10);
}

// TC: O(n)
// Aux. Space: O(n)

/*
Note: Iterative solution gives better 
auxiliary space O(1)

int digSum(int n) {

	int res = 0;

	while(n>=0){
		res = res + n%10;
		n=n/10;
	}
	return res;
}

// TC: O(n)
// Aux. Space: O(1)
*/

int main()
{
	int n;
	cin >> n;

	cout << digSum(n);
	return 0;
}
