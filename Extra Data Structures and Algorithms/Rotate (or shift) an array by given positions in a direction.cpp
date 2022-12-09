#include <iostream>
using namespace std;

/*******************************************/

/*
    Rotate (or shift) an array by given positions in a direction
*/

void rotateArray(int arr[], int n, int positions, int direction) {

	int start = positions;

	if (direction) start = n - positions;

	for (int i = start; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < start; i++)
	{
		cout << arr[i] << " ";
	}
}

/*******************************************/

int main() {

	/* Test cases, time complexity and space complexity are given from line no. 58 */

	// n = no. of elements
	// positions = positions to shift
	// direction = 0 to shift left, 1 to shift right
	
	int n, positions, direction;

	cin >> n;

	int arr[n]; // array to store n elements

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> positions;

	cin >> direction;

	rotateArray(arr, n, positions, direction);

	return 0;
}


/*
  This problem took me around 20 minutes to solve.

  Time complexity: O(n)
  Space complexity: O(n)
  where n is the number of elements in the array

  Test cases:
  ------------
  Test case 1:
  ------------
  Input:
  n = 6
  arr = [1, 3, 2, 7, 4, 6]
  p = 2
  d = 1

  Output:
  [4, 6, 1, 3, 2, 7]

  ------------
  Test case 2:
  ------------
  Input:
  n = 10
  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  p = 3
  d = 0

  Output:
  [4, 5, 6, 7, 8, 9, 10, 1, 2, 3]

  ------------
  Test case 3:
  ------------
  Input:
  n = 10
  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  p = 9
  d = 1

  Output:
  [2, 3, 4, 5, 6, 7, 8, 9, 10, 1]

  ------------
  Test case 4:
  ------------
  Input:
  n = 10
  arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  p = 6
  d = 0

  Output:
  [7, 8, 9, 10, 1, 2, 3, 4, 5, 6]

  ------------
  Test case 5:
  ------------
  Input:
  n = 10
  arr = [1, 9, 2, 8, 3, 7, 4, 6, 5, 10]
  p = 5
  d = 0

  Output:
  [7, 4, 6, 5, 10, 1, 9, 2, 8, 3]

  ------------
  Test case 6:
  ------------
  Input:
  n = 10
  arr = [1, 9, 2, 8, 3, 7, 4, 6, 5, 10]
  p = 2
  d = 1

  Output:
  [5, 10, 1, 9, 2, 8, 3, 7, 4, 6]

  */
