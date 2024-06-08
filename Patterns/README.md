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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
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
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		// star
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		// space
		for (int j = 1; j <= n - i; j++) {
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
12      21
123    321
1234  4321
1234554321
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
			cout << i - j + 1;
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

### Pattern 14
For n = 5
```
A
A B
A B C
A B C D
A B C D E
```
Code:
```cpp
void pattern14(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'A'; ch <= 'A' + i; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 15
For n = 5
```
A B C D E
A B C D
A B C
A B
A
```
Code:
```cpp
void pattern15(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 16
For n = 4
```
A B C D
A B C
A B
A
```
Code:
```cpp
void pattern16(int n) {
	for (int i = 0; i < n; i++) {
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 17
For n = 5
```
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```
Code:
```cpp
void pattern17(int n) {
	for (int i = 0; i < n; i++) {
		// space
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		// characters
		char ch = 'A';
		int breakpoint = (2 * i + 1) / 2;
		for (int j = 1; j <= 2 * i + 1; j++) {
			cout << ch;
			if (j <= breakpoint) ch++;
			else ch--;
		}
		// space
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 18
For n = 5
```
E
D E
C D E
B C D E
A B C D E
```
Code:
```cpp
void pattern18(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'E' - i; ch <= 'E'; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 19
For n = 5
```
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```
Code:
```cpp
void pattern19(int n) {
	int spaces = 0;
	for (int i = 0; i < n; i++) {
		// stars
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		// spaces
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		// stars
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		spaces += 2;
		cout << "\n";
	}
	spaces = 2 * n - 2;
	for (int i = 0; i < n; i++) {
		// stars
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		// spaces
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		// stars
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		spaces -= 2;
		cout << "\n";
	}
}
```

### Pattern 20
For n = 5
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```
Code:
```cpp
void pattern20(int n) {
	int spaces = 2 * n - 2;
	for (int i = 1; i <= 2 * n - 1; i++) {
		int stars = i;
		if (i > n) stars = 2 * n - i;

		// stars
		for (int j = 1; j <= stars; j++) {
			cout << "*";
		}

		// spaces
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}

		// stars
		for (int j = 1; j <= stars; j++) {
			cout << "*";
		}
		cout << "\n";
		if (i < n) spaces -= 2;
		else spaces += 2;
	}
}
```

### Pattern 21
For n = 5
```
*****
*   *
*   *
*   *
*****
```
Code:
```cpp
void pattern21(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
}
```

### Pattern 22
For n = 5
```
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
```
Code:
```cpp
void pattern22(int n) {
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			int top = i;
			int left = j;
			int right  = (2 * n - 2) - j;
			int down = (2 * n - 2) - i;
			cout << (n - min(min(top, down), min(left, right))) << " ";
		}
		cout << "\n";
	}
}
```


## Reference
- [Solve any Pattern Question - Trick Explained | 22 Patterns in 1 Shot | Strivers A2Z DSA Course](https://youtu.be/tNm_NNSB3_w) ([Practice](https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/))
