#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int n, int i = 0) {
	if (i >= n / 2)
		return;
	swap(arr[i], arr[n - i - 1]);

	reverseArr(arr, n, i + 1);
}

int main() {

	int arr[5] = {1, 2, 3, 4, 5};

	reverseArr(arr, 5);

	for (int x : arr)
		cout << x << " ";
	// 5 4 3 2 1

	return 0;
}
