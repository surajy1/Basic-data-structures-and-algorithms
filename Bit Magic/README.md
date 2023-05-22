# Bit Manipulation

## Check if Kth bit is set or not
- [Using RIGHT shift](/Bit%20Magic/Check%20if%20Kth%20bit%20is%20set%20or%20not%20(using%20RIGHT%20shift).cpp)

```cpp
/*
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
*/
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
