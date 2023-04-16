#include <iostream>
using namespace std;

/*************************************/
// Print prime factors of a given number

/*
    Input1: 84
    Output1: 2 2 3 7
    
    Input2: 13
    Output2: 13
    
    Input3: 450
    Output3: 2 3 3 5 5
    
    Input4: 52
    Output4: 2 2 13
    
    Input5: 144
    Output5: 2 2 2 2 3 3
*/
void printPrimeFactors(int n) {

    if (n <= 1) return;

    while (n % 2 == 0)
    {
        cout << 2 << " ";

        n = n / 2;
    }

    while (n % 3 == 0)
    {
        cout << 3 << " ";

        n = n / 3;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";

            n = n / i;
        }

        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }

    if (n > 3)
        cout << n;
}

// TC: O(sqrt(n))
/*************************************/

int main() {

    int n;

    cin >> n;

    printPrimeFactors(n);

    return 0;
}
