#include <iostream>
using namespace std;

/**********************************/
//Function to check if a number is a prime
/*
    Prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, ...

    Composite numbers: 4, 6, 8, 9, 10, ...

    Note: 1 is neither prime nor composite
*/
bool isPrime(int n){
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// TC: O(sqrt(n))

/**********************************/

int main(){

    int n;

    cin >> n;

    cout << isPrime(n);

    return 0;
}
