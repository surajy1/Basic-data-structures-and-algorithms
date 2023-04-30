#include<iostream>
using namespace std;

// Return 1(true) if given string is a palindrome, else return 0(false)
// Input1: "level"
// Output1: 1
// Input2: "abc"
// Output2: 0
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
