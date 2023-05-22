# Array

## [Print second largest element - tuf](/Array/tuf/Print%20second%20largest%20element.cpp)
```cpp
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = -1;
	    int secLargest = -1;
	    for(int i=0; i<n; i++) {
	        if(arr[i] > largest) {
	            secLargest = largest;
	            largest = arr[i];
	        }
	        else if(arr[i] > secLargest && arr[i] != largest) {
	            secLargest = arr[i];
	        }
	    }
	    return secLargest;
	}
};
```
