#include <iostream>
using namespace std;

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
