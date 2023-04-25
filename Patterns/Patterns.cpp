#include<iostream>
using namespace std;

void pattern1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void pattern2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void pattern3(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}

void pattern4(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
}

void pattern5(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i + 1; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void pattern6(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}

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

void pattern9(int n) {
	pattern7(n);
	pattern8(n);
}

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

void pattern14(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'A'; ch <= 'A' + i; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

void pattern15(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

void pattern16(int n) {
	for (int i = 0; i < n; i++) {
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

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

void pattern18(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'E' - i; ch <= 'E'; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

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

int main() {

	int n;
	cin >> n;
  
	pattern22(n);

	return 0;
}
