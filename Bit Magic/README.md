# Bit Manipulation

## Check if Kth bit is set or not
- [Using RIGHT shift](/Bit%20Magic/Check%20if%20Kth%20bit%20is%20set%20or%20not%20(using%20RIGHT%20shift).cpp)

```
Input1: 5 4
Output1: 0

Input2: 5 3
Output2: 1

Input3: 5 2
Output3: 0

Input4: 5 1
Output4: 1

Input5: 8 4
Output5: 1
```
Code:
```cpp
bool isKthBitSet(int n, int k) {
	if ((n >> (k - 1)) & 1)
		return true;
	else
		return false;
}
```
Alternative:
```cpp
bool isKthBitSet(int n, int k) {
	return ((1 & (n >> (k - 1))) > 0);
}
```

- [Using LEFT shift](/Bit%20Magic/Check%20if%20Kth%20bit%20is%20set%20or%20not%20(using%20LEFT%20shift).cpp)
Code:
```cpp
bool isKthBitSet(int n, int k) {
	if (n & (1 << (k - 1)))
		return true;
	else
		return false;
	
	// ALTRNATIVE
	// return ((n & (1 << (k - 1))) > 0);
}
```
Alternative:
```cpp
bool isKthBitSet(int n, int k) {
	return ((n & (1 << (k - 1))) > 0);
}
```

## [Count set bits (Brian Kerningam's Algorithm)](/Bit%20Magic/Count%20set%20bits%20(Brian%20Kerningam's%20Algorithm).cpp)
```
Input1: 5
Output1: 2

Input2: 10
Output2: 2

Input3: 11
Output3: 3

Input4: 31
Output4: 5
```
Code:
```cpp
int countSetBits(int n) {
	int res = 0;

	while (n > 0){
		n = (n & (n - 1));
		res++;
	}

	return res;
}
// TC: Theta(Set bit(s) count)
```

## [Power of two (Check if the given number is a power of two)](/Bit%20Magic/Power%20of%20two%20(Check%20if%20the%20given%20number%20is%20a%20power%20of%20two).cpp)
```
Input1: 1
Output1: 1

Input2: 4
Output2: 1

Input3: 31
Output3: 0

Input4: 32
Output4: 1

Input5: 1024
Output5: 1
```
Code:
```cpp
bool isPow2(int n) {
	return ((n & (n - 1)) == 0);
}
// TC: Theta(1)
```

## [Find the missing number (in array of 1 through n, with a single number missing)](/Bit%20Magic/Find%20the%20missing%20number%20(in%20array%20of%201%20through%20n%2C%20with%20a%20single%20number%20missing).cpp)
```
Given an array of n number that has
values int range [1...n+1]. Every
number appears exactly once. Hence, one
number is missing. Find the missing
number.

Sample 1:
Ip: arr[] = {1, 3}
Op: 2

Sample 2:
Ip: arr[] = {4, 2, 1};
Op: 3

Sample 3:
Ip: arr[] = {2, 5, 4, 3};
Op: 1
```
Code:
```cpp
int findMissingNum(int arr[], int n) {
	int res = 0;

	for (int i = 0; i < n; i++){
		res = res ^ arr[i];
	}

	for (int i = 1; i <= n + 1; i++){
		res = res ^ i;
	}
	return res;
}
// TC: Theta(n)
// SC: Theta(1)
```

## [Find the only odd occurring number](/Bit%20Magic/Find%20the%20only%20odd%20occurring%20number.cpp)
```
Sample 1:
Ip: arr[] = {4, 6, 4, 4, 4, 5, 5}
Op: 6

Sample 2:
Ip: arr[] = {5, 7, 7, 5, 5};
Op: 5
```
Code:
```cpp
int findOddOccurring(int arr[], int n) {
	int res = 0;

	for (int i = 0; i < n; i++)
		res = res ^ arr[i];

	return res;
}
// TC: Theta(n)
// SC: Theta(1)
```

## [Find two odd (times) appearing (or occurring) number in the given array](/Bit%20Magic/Find%20two%20odd%20(times)%20appearing%20(or%20occurring)%20number%20in%20the%20given%20array.cpp)
```
Sample 1:
Ip: arr[] = {3 4 3 4 5 4 4 6 7 7}
Op: 5 6

Sample 2:
Ip: arr[] = {3 4 3 4 8 4 4 32 7 7};
Op: 8 32
```
Code:
```cpp
void findTwoOddOccuring(int arr[], int n) {
	int XORall = 0, res1 = 0, res2 = 0;

	for (int i = 0; i < n; i++)
		XORall = XORall ^ arr[i];
	
	// cout << "XORall: " << XORall << "\n";

	int sn = XORall & (~(XORall - 1));
	
	// cout << "sn = XORall & (~(XORall - 1)) = " << XORall << " & (~(" << (XORall - 1) << ")) = " << XORall << " & " << (~(XORall - 1)) << " = " << sn << "\n";

	for (int i = 0; i < n; i++) {
		if ((arr[i]&sn) != 0)
			res1 = res1 ^ arr[i];

		else
			res2 = res2 ^ arr[i];
	}

	cout << res1 << " " << res2;
}
// TC: Theta(n)
// SC: Theta(1)
```

## [Power Set using bitwise operators (generate subsets of a given string)](/Bit%20Magic/Power%20Set%20using%20bitwise%20operators%20(generate%20subsets%20of%20a%20given%20string).cpp)
```
Power Set using bitwise operators
(generate subsets of a given string)
Note: order of subsets printed doesn't matter

Ex. 1:
IP: "abc"
OP: "", "a", "b", "c", "ab", "bc", "ac", "abc"
```
Code:
```cpp
void printPowerSet(string str) {
	int n = str.length();
	int powSize = pow(2, n);

	for (int counter = 0; counter < powSize; counter++) {
		for (int j = 0; j < n; j++)
			if ((counter & (1 << j)) != 0)
				cout << str[j];

		cout << "\n";
	}
}
// TC: Theta(pow(2, n) * str.length())
// SC: Theta(pow(2, n))
```