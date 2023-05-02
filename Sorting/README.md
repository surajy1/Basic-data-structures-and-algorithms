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
//     O(n), for sorted arrays
```

### [Insertion Sort](/Sorting/Insertion%20Sort.cpp)
```cpp
// Insertion sort

void insertion_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
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
```

## Reference
- [Sorting - Part 1 | Selection Sort, Bubble Sort, Insertion Sort | Strivers A2Z DSA Course](https://youtu.be/HGk_ypEuS24?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
