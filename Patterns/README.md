# Patterns
## Nested loops
- Outer loops are for the rows, inner loops are for the columns
	1. for the outer loop, count the no. of lines
	2. for the inner loop, focus on the columns, & somehow connect them to the rows
	3. Print inside the inner `for` loop
	4. Observe symmetry (optional)

### Pattern 1
For n = 5.
```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

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
