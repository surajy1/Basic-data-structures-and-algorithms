# Sorting

### Selection Sort
***[Code](/Sorting/Selection%20Sort.cpp):***
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


### Reference
	- [Sorting - Part 1 | Selection Sort, Bubble Sort, Insertion Sort | Strivers A2Z DSA Course](https://youtu.be/HGk_ypEuS24?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
