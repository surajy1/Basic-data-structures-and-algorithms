#include <iostream>
using namespace std;

/****************************/
/*
	Find the only odd occurring number

	Sample 1:
	Ip: arr[] = {4, 6, 4, 4, 4, 5, 5}
	Op: 6

	Sample 2:
	Ip: arr[] = {5, 7, 7, 5, 5};
	Op: 5
*/

int findOddOccurring(int arr[], int n) {
	int res = 0;

	for (int i = 0; i < n; i++)
		res = res ^ arr[i];

	return res;
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

	cout << findOddOccurring(arr, n);

	return 0;
}
