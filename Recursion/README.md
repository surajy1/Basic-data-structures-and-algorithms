# Recursion

### [Reverse a given array](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Reverse%20an%20array%20-%20tuf.cpp)
- Reference: [Re 4. Problems on Functional Recursion | Strivers A2Z DSA Course](https://youtu.be/twuC1F6gLI8?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
```cpp
// Input: arr = {1,2,3,4,5}
// Output: arr = {5,4,3,2,1}
void reverseArr(int i, int arr[], int n) {
	if (i >= n / 2)
		return;
	swap(arr[i], arr[n - i - 1]);

	reverseArr(i + 1, arr, n);
}
// TC: O(n)
```
