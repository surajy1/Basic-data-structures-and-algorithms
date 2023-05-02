#include<iostream>
using namespace std;

// Bubble sort
// Input: 3 6 4 9 5
// Output: 3 4 5 6 9

void bubble_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int didSwap = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				didSwap = 1;
			}
		}
		if (didSwap == 0) break;
	}
}
// TC: O(n + (n-1) + (n-2) + (n-3) +...+ 2)
// 	=> O((n * (n+1))/2)
// TC: O(pow(n, 2)), for worst and average cases
//     O(n), for sorted arrays

int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	bubble_sort(arr, n);

	for (int x : arr)
		cout << x << " ";

	return 0;
}
