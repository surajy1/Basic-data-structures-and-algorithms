#include<iostream>
using namespace std;

// Selection sort
// Input: 3 6 4 9 5
// Output: 3 4 5 6 9

void selection_sort(int arr[], int n) {
	for (int i = 0; i <= n - 2; i++) {
		int mini = arr[i], min_id = i;

		for (int j = i; j <= n - 1; j++) {
			if (arr[j] < arr[min_id]) {
				min_id = j;
			}
		}
		swap(arr[i], arr[min_id]);
	}
}
// TC: O(n + (n-1) + (n-2) + (n-3) +...+ 2 + 1)
// 	=> O((n * (n+1))/2)
// TC: O(pow(n, 2)), where n is the number of elements in the array
int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	selection_sort(arr, n);

	for (int x : arr)
		cout << x << " ";

	return 0;
}
