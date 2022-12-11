#include <iostream>
using namespace std;

/****************************/
/*
	Given an array of n number that has
	values int range [1...n+1]. Every
	number appears exactly once. Hence, one
	number is missing. Find the missing
	number.

	Sample 1:
	Ip: arr[] = {1, 3}
	Op: 2

	Sample 2:
	Ip: arr[] = {4, 2, 1};
	Op: 3

	Sample 3:
	Ip: arr[] = {2, 5, 4, 3};
	Op: 1
*/

int findMissingNum(int arr[], int n) {
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		res = res ^ arr[i];
	}

	for (int i = 1; i <= n + 1; i++)
	{
		res = res ^ i;
	}
	return res;
}

// TC: Theta(n)
// SC: Theta(1);
/***************************/

int main() {

	int n;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << findMissingNum(arr, n);

	return 0;
}
