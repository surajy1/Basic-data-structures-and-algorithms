#include <iostream>
#include <vector>
using namespace std;

// Merge Sort
/*
	Test case:
	n = 10
	Input  : 5 7 9 1 3 8 9 4 11 10
	Output : 1 3 4 5 7 8 9 9 10 11
*/
void merge(vector<int>&arr, int low, int mid, int high) {
	vector<int> temp;

	int left = low;
	int right = mid + 1;

	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}

	while (left <= mid) {
		temp.push_back(arr[left]);
		left++;
	}
	while (right <= high) {
		temp.push_back(arr[right]);
		right++;
	}

	for (int i = low; i <= high; i++) {
		arr[i] = temp[i - low];
	}
}

void mS(vector<int>&arr, int low, int high) {
	if (low == high) return;

	int mid = (low + high) / 2;
	// divide
	mS(arr, low, mid);
	mS(arr, mid + 1, high);
	// merge
	merge(arr, low, mid, high);
}

void merge_sort(vector<int>&arr, int n) {
	mS(arr, 0, n - 1);
}
// TC: O(n * log n), for best and average cases and O(n) for worst cases, where n is the number of elements in the array

int main() {

	int n;
	cin >> n;
	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	merge_sort(arr, n);

	for (int x : arr)
		cout << x << " ";

	return 0;
}
