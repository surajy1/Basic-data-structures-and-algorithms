#include <iostream>
using namespace std;

int distPrimeFacCount[1000000] = {0};
void countPrimes() {

	for (int i = 2; i < 1000001; i++)
		if (!distPrimeFacCount[i])
			for (int j = i; j < 1000001; j += i)
				distPrimeFacCount[j]++;
}

int main() {

	countPrimes();

	int num;

	cin >> num;
	cout << distPrimeFacCount[num];

	return 0;
}
