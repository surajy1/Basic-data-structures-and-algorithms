#include <iostream>
using namespace std;

void powerSet(string &str, int index = 0, string curr = "")
{
	if (index == str.length()) {
		cout << curr << endl;
		return;
	}

	powerSet(str, index + 1, curr + str[index]);
	powerSet(str, index + 1, curr);
}
int main() {

	string str = "abc";
	powerSet(str);

	return 0;
}
