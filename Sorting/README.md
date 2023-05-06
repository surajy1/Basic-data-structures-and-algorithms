# Sorting

### [Selection Sort](/Sorting/Selection%20Sort.cpp)
```cpp
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
```

### [Bubble Sort](/Sorting/Bubble%20Sort.cpp)
```cpp
// Bubble sort

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
//     O(n), for best case (sorted arrays), where n is the number of elements in the array
```

### [Insertion Sort](/Sorting/Insertion%20Sort.cpp)
```cpp
// Insertion sort

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
//     O(n), for best case (sorted arrays), where n is the number of elements in the array
```

### [Merge Sort](/Sorting/Merge%20Sort.cpp)
```cpp
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
```

## Reference
- [Sorting - Part 1 | Selection Sort, Bubble Sort, Insertion Sort | Strivers A2Z DSA Course](https://youtu.be/HGk_ypEuS24?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
- [Merge Sort | Algorithm | Pseudocode | Dry Run | Code | Strivers A2Z DSA Course](https://youtu.be/ogjf7ORKfd8)
