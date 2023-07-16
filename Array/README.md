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

## [Find the Union](https://www.codingninjas.com/studio/problems/sorted-array_6613259)
Solution 1:
```cpp
#include <set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Set to store the unique elements
    set<int> s;
    vector<int> res;

    int n = a.size(), m = b.size();

    for(int i = 0; i < n; i++) {
        s.insert(a[i]);
    }
    for(int i = 0; i < m; i++) {
        s.insert(b[i]);
    }

    for(auto x : s) {
        res.push_back(x);
    }

    return res;
}
// TC: O(n + m), where n and m are the number of integers in arrays a and b.
// SC: O(n + m)
```
Reference: [Union of Two Sorted Arrays](https://takeuforward.org/data-structure/union-of-two-sorted-arrays/)

## [Longest Subarray with given Sum K(Positives) - tuf](https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399)
**Problem Statement**: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
```cpp
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left = 0, right = 0, n = a.size();
    long long sum = a[0];
    int maxLen = 0;
    
    while(right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward the right pointer:
        right++;
        if (right < n) sum += a[right];
    }
    return maxLen;
}
// TC: O(2*N), where N is the size of the array.
```
Reference: [Longest Subarray with given Sum K(Positives)](https://takeuforward.org/data-structure/longest-subarray-with-given-sum-k/)


