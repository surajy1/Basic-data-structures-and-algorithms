#include <iostream>
using namespace std;

/**********************************/
// Print divisors of a given number

void printDivisors(int n) {

    int i;
    
    // Print all divisors from 1 (inclusive) to sqrt(n) (exclusive)
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    
    // Print all divisors from sqrt(n) (inclusive) to n (inclusive)
    for (; i >= 1; i--)
        if (n % i == 0)
            cout << n / i << " ";
}

// TC: O(sqrt(n)), SC: O(1)
/**********************************/

int main() {

    int n;

    cin >> n;

    printDivisors(n);

    return 0;
}
