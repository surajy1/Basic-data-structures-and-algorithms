#include <iostream>
#include <vector>
using namespace std;

// Quick Sort
/*
	Test case:
	n = 10
	Input  : 5 7 9 1 3 8 9 4 11 10
	Output : 1 3 4 5 7 8 9 9 10 11
*/
int placingElement(vector<int> &arr, int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;

	while (i < j) {
		while (arr[i] <= pivot && i <= high - 1) {
			i++;
		}

		while (arr[j] > pivot && j >= low + 1) {
			j--;
		}

		if (i < j) swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j; // j becomes the partition index
}

void qSort(vector<int> &arr, int low, int high) {
	if (low < high) {
		int partitionIndex = placingElement(arr, low, high);

		qSort(arr, low, partitionIndex - 1);
		qSort(arr, partitionIndex + 1, high);
	}
}

vector<int> quick_sort(vector<int> &arr) {
	qSort(arr, 0, arr.size() - 1);
	return arr;
}

// TC: O(n * log n)
// SC: O(1)
// where n is the number of elements in the array

int main() {

	int n;
	cin >> n;
	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	quick_sort(arr);

	for (int x : arr)
		cout << x << " ";

	return 0;
}
