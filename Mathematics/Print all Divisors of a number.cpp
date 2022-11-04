#include <iostream>
using namespace std;

/**********************************/
// Print divisors of a given number

void printDivisors(int n) {

    int i;

    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";

    for (; i >= 1; i++)
        if (n % i == 0)
            cout << i << " ";
}

// TC: O(sqrt(n)), SC: O(1)
/**********************************/

int main() {

    int n;

    cin >> n;

    printDivisors(n);

    return 0;
}
