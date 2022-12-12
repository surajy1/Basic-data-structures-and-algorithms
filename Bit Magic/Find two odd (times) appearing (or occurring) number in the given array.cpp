#include <iostream>
using namespace std;

/****************************/
/*
	Find two odd (times) occurring numbers

	Sample 1:
	Ip: arr[] = {3 4 3 4 5 4 4 6 7 7}
	Op: 5 6

	Sample 2:
	Ip: arr[] = {3 4 3 4 8 4 4 32 7 7};
	Op: 8 32
*/

void findTwoOddOccuring(int arr[], int n) {
	int XORall = 0, res1 = 0, res2 = 0;

	for (int i = 0; i < n; i++)
		XORall = XORall ^ arr[i];

	int sn = XORall & (~(XORall - 1));

	for (int i = 0; i < n; i++)
	{
		if ((arr[i]&sn) != 0)
			res1 = res1 ^ arr[i];

		else
			res2 = res2 ^ arr[i];
	}

	cout << res1 << " " << res2;
}

// TC: Theta(n)
// SC: Theta(1)
/***************************/

int main() {

	// number of integers in array
	int n;

	cin >> n;

	// array of n integers
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	findTwoOddOccuring(arr, n);

	return 0;
}
