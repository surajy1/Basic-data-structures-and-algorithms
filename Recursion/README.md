# Recursion

### [Reverse a given array](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Reverse%20an%20array%20-%20tuf.cpp)
- Reference: [Re 4. Problems on Functional Recursion | Strivers A2Z DSA Course](https://youtu.be/twuC1F6gLI8?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
	```cpp
	// Input: arr = {1,2,3,4,5}
	// Output: arr = {5,4,3,2,1}
	void reverseArr(int i, int arr[], int n) { // call: reverseArr(0, arr, arr.size())
		if (i >= n / 2)
			return;
		swap(arr[i], arr[n - i - 1]);

		reverseArr(i + 1, arr, n);
	}
	// TC: O(n)
	```


### Check a palindrome
***[Code 1](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Palindrome_check_using_recursion_for_strings.cpp):***
	```cpp
	// Return 1(true) if given string is a palindrome, else return 0(false)
	// Input1: "level"
	// Output1: 1
	// Input2: "abc"
	// Output2: 0
	bool isPal(string &s, int start, int end) {

		if (start >= end)
			return true;

		return (s[start] == s[end]) &&
			   isPal(s, start + 1, end - 1);
	}
	// TC: O(n)
	// Aux. Space: O(n)

	int main()
	{
		string str;
		cin >> str;

		cout << isPal(str, 0, str.size() - 1);
		return 0;
	}
	```

***[Code 2](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Palindrome_check_using_recursion_for_strings_2(tuf).cpp):***
- Reference: [Re 4. Problems on Functional Recursion | Strivers A2Z DSA Course](https://youtu.be/twuC1F6gLI8?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
	```cpp
	bool isPal(int i, string &s) {
		if (i >= s.size() / 2)
			return true;
		if (s[i] != s[s.size() - i - 1])
			return false;
		return isPal(i + 1, s);
	}

	int main() {

		string s = "level";
		cout << isPal(0, s);

		return 0;
	}
	```


### Print nth fibonacci number
***[Code 1](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Print_nth_fibonacci_number.cpp):***
	```cpp
	int nthFib(int n) {
		if (n <= 1)
			return n;

		return nthFib(n - 1) + nthFib(n - 2);
	}
	```

***[Code 2](https://github.com/y-suraj/Data-structures-and-algorithms/blob/main/Recursion/Print_nth_fibonacci_number_2(tuf).cpp):***
- Reference: [Re 5. Multiple Recursion Calls | Problems | Strivers A2Z DSA Course](https://youtu.be/kvRjNm4rVBE?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz)
	```cpp
	// Print nth fibonacci number
	// Input1: n = 4
	// Output1: 3
	// Input2: n = 8
	// Output2: 21

	int nthFact(int n) {
		if (n <= 1)
			return n;

		int last = nthFact(n - 1);
		int sLast = nthFact(n - 2);

		return last + sLast;
	}
	// TC: O(pow(2, n)), exponential
	int main() {

		int n;
		cin >> n;

		cout << nthFact(n);

		return 0;
	}
	```
