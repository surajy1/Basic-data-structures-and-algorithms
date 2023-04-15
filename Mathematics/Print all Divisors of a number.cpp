#include <iostream>
using namespace std;

/**********************************/
// Print divisors of a given number
/*
    Input1: 50
    Output1: 1 2 5 10 25 50
    
    Input2: 36
    Output2: 1 2 3 4 6 9 12 18 36
    
    Input3: 29
    Output3: 1 29
*/
void printDivisors(int n) {

    int i;
    
    // Print all divisors from 1 (inclusive) to sqrt(n) (exclusive)
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    
    // Print all divisors from sqrt(n) (inclusive) to n (inclusive)
    for (i; i >= 1; i--)
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
