# Patterns
## Nested loops
- Outer loops are for the rows, inner loops are for the columns
	1. for the outer loop, count the no. of lines
	2. for the inner loop, focus on the columns, & somehow connect them to the rows
	3. Print inside the inner `for` loop
	4. Observe symmetry (optional)

### Pattern 1
For n = 5
```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```
Code:
```cpp
void pattern1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}
```

### Pattern 2
For n = 5
```
*
* *
* * *
* * * *
* * * * *
```
Code:
```cpp
void pattern2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}
```

### Pattern 3
For n = 6
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
```
Code:
```cpp
void pattern3(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 4
For n = 4
```
1
2 2
3 3 3
4 4 4 4
```
Code:
```cpp
void pattern4(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 5
For n = 5
```
* * * * *
* * * *
* * *
* *
*
```
Code:
```cpp
void pattern5(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i + 1; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}
```

### Pattern 6
For n = 4
```
1 2 3 4
1 2 3
1 2
1
```
Code:
```cpp
void pattern6(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 7
For n = 5
```
    *
   ***
  *****
 *******
*********
```
Code:
```cpp
void pattern7(int n) {
	for (int i = 0; i < n; i++) {
		// space
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		// star
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		// space
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 8
For n = 6
```
***********
 *********
  *******
   *****
    ***
     *
```
Code:
```cpp
void pattern8(int n) {
	for (int i = 0; i < n; i++) {
		// space
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		// star
		for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
			cout << "*";
		}
		// space
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 9
For n = 5
```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```
Code:
```cpp
void pattern9(int n) {
	pattern7(n);
	pattern8(n);
}
```

### Pattern 10
For n = 5
```
*
**
***
****
*****
****
***
**
*
```
Code:
```cpp
void pattern10(int n) {
	for (int i = 1; i <= 2 * n - 1; i++) {
		int noOfStars = i;
		if (i > n) noOfStars = 2 * n - i;
		for (int j = 1; j <= noOfStars; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
```

### Pattern 11
For n = 5
```
1
01
101
0101
10101
```
Code:
```cpp
void pattern11(int n) {
	int start = 1;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) start = 1;
		else start = 0;
		for (int j = 0; j <= i; j++) {
			cout << start;
			start = 1 - start;
		}
		cout << "\n";
	}
}
```

### Pattern 12
For n = 5
```
1        1
12      12
123    123
1234  1234
1234512345
```
Code:
```cpp
void pattern12(int n) {
	int spaces = 2 * (n - 1);
	for (int i = 1; i <= n; i++) {
		// numbers
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		// space
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		//numbers
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << "\n";
		spaces -= 2;
	}
}
```

### Pattern 13
For n = 5
```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```
Code:
```cpp
void pattern13(int n) {
	int num = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << num << " ";
			num = num + 1;
		}
		cout << "\n";
	}
}
```
