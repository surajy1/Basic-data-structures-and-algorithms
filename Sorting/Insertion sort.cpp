#include<iostream>
using namespace std;

// Insertion sort
// Input: 3 6 4 9 5
// Output: 3 4 5 6 9

void insertion_sort(int arr[], int n) {
	for (int i = 0; i <= n - 1; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			swap(arr[j - 1], arr[j]);
			j--;
		}
	}
}
// TC: O(n + (n-1) + (n-2) + (n-3) +...+ 2 + 1)
// 	=> O((n * (n+1))/2)
// TC: O(pow(n, 2)), for worst and average cases
//     O(n), for sorted arrays, where n is the number of elements in the array

int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	insertion_sort(arr, n);

	for (int x : arr)
		cout << x << " ";

	return 0;
}
